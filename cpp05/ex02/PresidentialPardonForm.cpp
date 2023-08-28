/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PresidentialPardonForm.cpp                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jlaisne <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/27 13:57:15 by juleslaisne       #+#    #+#             */
/*   Updated: 2023/08/28 13:47:23 by jlaisne          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PresidentialPardonForm.hpp"

PresidentalPardonForm::PresidentalPardonForm( const std::string& target ) : _target(target), Form("Presidential Pardon Form", 25, 5) {
    
    std::cout << "Constructor Called." << std::endl;
}

PresidentalPardonForm::~PresidentalPardonForm() {

    std::cout << "Destructor Called." << std::endl;
}

PresidentalPardonForm::PresidentalPardonForm( const PresidentalPardonForm& cpy ) : Form(src), _target(cpy._target) {
    
    std::cout << "Copy Constructor Called." << std::endl;
}

PresidentalPardonForm::PresidentalPardonForm& operator=( const PresidentalPardonForm& other ) {
    
    if (this != *other)
        _target = other.target;
    return *this;
}