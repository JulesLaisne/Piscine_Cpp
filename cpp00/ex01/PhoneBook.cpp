/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jlaisne <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/21 15:28:42 by jlaisne           #+#    #+#             */
/*   Updated: 2023/05/21 15:41:29 by jlaisne          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "PhoneBook.Class.hpp"

PhoneBook::PhoneBook( void ){
    
    std::cout << "Test Constructor" << std::endl;
    return ;
}

PhoneBook::~PhoneBook( void ){
    
    std::cout << "Test Destructor" << std::endl;
    return ;
}