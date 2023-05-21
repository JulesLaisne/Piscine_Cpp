/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jlaisne <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/21 14:43:38 by jlaisne           #+#    #+#             */
/*   Updated: 2023/05/21 17:06:25 by jlaisne          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <string>
#include "PhoneBook.Class.hpp"
#include "Contact.Class.hpp"

void    add_Contact(void);

int main(void){

    std::string    keyword;
    PhoneBook      Book;

    while (1)
    {
        std::cout << "Command: ";
        std::getline(std::cin, keyword);
        if (keyword.compare("SEARCH") == 0)
            std::cout << "Searching." << std::endl;
        else if (keyword.compare("ADD") == 0)
            add_Contact();
        else if (keyword.compare("EXIT") == 0)
            exit (1);
    }
    return (0);
}

void    add_Contact(void){

    std::string buffer;
    Contact     NewContact;

    while (!buffer.length())
    {
        std::cout << "First Name: ";
        std::getline(std::cin, buffer);
    }
    NewContact.set_First_Name(buffer);
    buffer.clear();
    while (!buffer.length())
    {
        std::cout << "Last Name: ";
        std::getline(std::cin, buffer);
    }
    NewContact.set_Last_Name(buffer);
    buffer.clear();
    while (!buffer.length())
    {
        std::cout << "nickname: ";
        std::getline(std::cin, buffer);
    }
    NewContact.set_Nickname(buffer);
    buffer.clear();
    while (!buffer.length())
    {
        std::cout << "Phone Number: ";
        std::getline(std::cin, buffer);
    }
    NewContact.set_Phone_Number(buffer);
    buffer.clear();
    while (!buffer.length())
    {
        std::cout << "Darkest Secret: ";
        std::getline(std::cin, buffer);
    }
    NewContact.set_Darkest_Secret(buffer);
    buffer.clear();
}