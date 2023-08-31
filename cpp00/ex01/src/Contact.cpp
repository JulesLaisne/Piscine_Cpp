/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jlaisne <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/21 16:04:21 by jlaisne           #+#    #+#             */
/*   Updated: 2023/08/28 16:37:24 by jlaisne          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "../includes/Contact.Class.hpp"

Contact::Contact( void ) :
    _FirstName(""),
    _LastName(""),
    _Nickname(""),
    _PhoneNumber(""),
    _DarkestSecret("")
{
}

Contact::~Contact( void ){

}

void    Contact::set_First_Name(const std::string FirstName){
    
    this->_FirstName = FirstName;
}

void    Contact::set_Last_Name(const std::string LastName){
    
    this->_LastName = LastName;
}

void    Contact::set_Nickname(const std::string Nickname){
    
    this->_Nickname = Nickname;
}

void    Contact::set_Phone_Number(const std::string PhoneNumber){
    
    this->_PhoneNumber = PhoneNumber;
}

void    Contact::set_Darkest_Secret(const std::string DarkestSecret){
    
    this->_DarkestSecret = DarkestSecret;
}

std::string Contact::get_First_Name() const{

    return this->_FirstName;
}
std::string Contact::get_Last_Name() const {

    return this->_LastName;
}
std::string Contact::get_Nickname() const {

    return this->_Nickname;
}
std::string Contact::get_Phone_Number() const {

    return this->_PhoneNumber;
}
std::string Contact::get_Darkest_Secret() const {

    return this->_DarkestSecret;
}