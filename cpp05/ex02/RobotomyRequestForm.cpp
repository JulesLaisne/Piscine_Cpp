/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RobotomyRequestForm.cpp                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jlaisne <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/28 10:57:06 by jlaisne           #+#    #+#             */
/*   Updated: 2023/08/28 13:47:10 by jlaisne          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "RobotomyRequestForm.hpp"

RobotomyRequestForm::RobotomyRequestForm( const std::string& target ) : _target(target), Form("Presidential Pardon Form", 25, 5) {
    
    std::cout << "Constructor Called." << std::endl;
}

RobotomyRequestForm::~RobotomyRequestForm() {

    std::cout << "Destructor Called." << std::endl;
}

RobotomyRequestForm::RobotomyRequestForm( const RobotomyRequestForm& cpy ) : Form(src), _target(cpy._target) {
    
    std::cout << "Copy Constructor Called." << std::endl;
}

RobotomyRequestForm::RobotomyRequestForm& operator=( const RobotomyRequestForm& other ) {
    
    if (this != *other)
        _target = other.target;
    return *this;
}