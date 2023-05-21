/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jlaisne <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/21 14:43:38 by jlaisne           #+#    #+#             */
/*   Updated: 2023/05/21 16:35:10 by jlaisne          ###   ########.fr       */
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

    while (keyword.compare("EXIT") != 0)
    {
        std::cout << "Command: ";
        std::cin >> keyword;
        if (keyword.compare("SEARCH") == 0)
            std::cout << "Searching." << std::endl;
        else if (keyword.compare("ADD") == 0)
        {
            std::cout << "Adding." << std::endl;
            add_Contact();
        }
    }
    return (0);
}

void    add_Contact(void){

}