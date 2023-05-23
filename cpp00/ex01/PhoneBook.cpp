/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jlaisne <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/21 15:28:42 by jlaisne           #+#    #+#             */
/*   Updated: 2023/05/23 11:22:40 by jlaisne          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <iomanip>
#include <cstdlib>
#include "PhoneBook.Class.hpp"
#include "Contact.Class.hpp"
#include "Colors.Class.hpp"

PhoneBook::PhoneBook( void ) : max_index(0)
{
}

PhoneBook::~PhoneBook( void ){

}

void    PhoneBook::set_contact(Contact& NewContact){
    
    if (max_index < 8) {
            _PhoneBook[max_index++] = NewContact;
    } 
    else {
            _PhoneBook[max_index % 8] = NewContact;
            max_index++;
    }
}

void    PhoneBook::set_index(int index){
    
    this->max_index = index;
}

void    PhoneBook::display_Contacts(){
    
    int            index;
    int            res;
    std::string    keyword;
    
    index = 0;
    res = 0;
    while (_PhoneBook[index].get_First_Name().length())
    {
        std::cout << std::setw(10) << index + 1;
        std::cout << "|";
        if (_PhoneBook[index].get_First_Name().length() > 10)
            std::cout << std::setw(10) << _PhoneBook[index].get_First_Name().substr(0, 10);
        else
            std::cout << std::setw(10) << _PhoneBook[index].get_First_Name();
        std::cout << "|";
        if (_PhoneBook[index].get_Last_Name().length() > 10)
            std::cout << std::setw(10) << _PhoneBook[index].get_Last_Name().substr(0, 10);
        else
            std::cout << std::setw(10) << _PhoneBook[index].get_Last_Name();
        std::cout << "|";
        if (_PhoneBook[index].get_Nickname().length() > 10)
            std::cout << std::setw(10) << _PhoneBook[index].get_Nickname().substr(0, 10);
        else
            std::cout << std::setw(10) << _PhoneBook[index].get_Nickname();
        std::cout << std::endl;
        index++;
    }
    if (index != 0)
    {
        std::cout << "Enter wanted ID for more: ";
        while (res == 0)
        {
            keyword.clear();
            std::getline(std::cin, keyword);
            res = atoi(keyword.c_str());
            if (res == 0 || res < 0 || res > 9 || _PhoneBook[res - 1].get_First_Name().length() == 0)
            {
                std::cout << RED << BOLD << "Enter a valid ID: " << RESET;
                res = 0;
            }
        }
        std::cout << std::endl << WHITE << BOLD << "Contact: " << _PhoneBook[res - 1].get_First_Name() << std::endl << std::endl << RESET;
        std::cout << std::setw(10) <<  BLUE << BOLD << "\tFirst name: " << RESET << _PhoneBook[res - 1].get_First_Name() << std::endl;
        std::cout << std::setw(10) <<  BLUE << BOLD << "\tLast name: "<< RESET <<_PhoneBook[res - 1].get_Last_Name() << std::endl;
        std::cout << std::setw(10) <<  BLUE << BOLD << "\tNickname: " << RESET <<_PhoneBook[res - 1].get_Nickname() << std::endl;
        std::cout << std::setw(10) <<  BLUE << BOLD << "\tPhone Number:"<< RESET <<_PhoneBook[res - 1].get_Phone_Number() << std::endl;
        std::cout << std::setw(10) <<  BLUE << BOLD << "\tDarkest Secret: " << RESET <<_PhoneBook[res - 1].get_Darkest_Secret() << std::endl << std::endl;
    }
    else
            std::cout << std::endl << WHITE << BOLD << "\tAdd a contact first with the ADD command." << std::endl << std::endl << RESET;
}
