/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jlaisne <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/21 14:43:38 by jlaisne           #+#    #+#             */
/*   Updated: 2023/08/28 16:37:52 by jlaisne          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <string>
#include <iomanip>
#include "../includes/PhoneBook.Class.hpp"
#include "../includes/Contact.Class.hpp"
#include "../includes/Colors.Class.hpp"

Contact    add_Contact(void);

int main(void){

    std::string    keyword;
    Contact        NewContact;
    PhoneBook      Book;

    Book.set_index(0);
    while (1)
    {
        std::cout << WHITE << BOLD << "Command: " << RESET;
        std::getline(std::cin, keyword);
        if (std::cin.eof())
            exit (1);
        if (keyword.compare("SEARCH") == 0)
            Book.display_Contacts();
        else if (keyword.compare("ADD") == 0)
        {
            NewContact = add_Contact();
            Book.set_contact(NewContact);
        }
        else if (keyword.compare("EXIT") == 0)
        {
            std::cout << RED << BOLD << "\tExiting Book..."  << RESET << std::endl;
            exit (1);
        }
        else
            std::cout << RED << BOLD << "\tInvalid command. Try < [ADD] | [SEARCH] | [EXIT] >" << RESET << std::endl;
            
    }
    return (0);
}

Contact    add_Contact(void){

    std::string buffer;
    Contact     NewContact;

    while (!buffer.length())
    {
        std::cout << BLUE << BOLD << "\tFirst Name: " << RESET;
        std::getline(std::cin, buffer);
        if (std::cin.eof())
            exit (1);
    }
    NewContact.set_First_Name(buffer);
    buffer.clear();
    while (!buffer.length())
    {
        std::cout << BLUE << BOLD << "\tLast Name: " << RESET;
        std::getline(std::cin, buffer);
        if (std::cin.eof())
            exit (1);
    }
    NewContact.set_Last_Name(buffer);
    buffer.clear();
    while (!buffer.length())
    {
        std::cout << BLUE << BOLD << "\tNickname: " << RESET;
        std::getline(std::cin, buffer);
        if (std::cin.eof())
            exit (1);
    }
    NewContact.set_Nickname(buffer);
    buffer.clear();
    while (!buffer.length())
    {
        std::cout << BLUE << BOLD << "\tPhone Number: " << RESET;
        std::getline(std::cin, buffer);
        if (std::cin.eof())
            exit (1);
    }
    NewContact.set_Phone_Number(buffer);
    buffer.clear();
    while (!buffer.length())
    {
        std::cout << BLUE << BOLD << "\tDarkest Secret: " << RESET;
        std::getline(std::cin, buffer);
        if (std::cin.eof())
            exit (1);
    }
    NewContact.set_Darkest_Secret(buffer);
    buffer.clear();
    return NewContact;
}