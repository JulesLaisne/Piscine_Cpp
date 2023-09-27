/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RobotomyRequestForm.cpp                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jlaisne <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/28 10:57:06 by jlaisne           #+#    #+#             */
/*   Updated: 2023/09/26 15:01:44 by jlaisne          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/RobotomyRequestForm.hpp"

RobotomyRequestForm::RobotomyRequestForm( const std::string& target ) : AForm("Robotomy Request Form", 72, 45), _target(target) {
    
    std::cout << "Constructor Called." << std::endl;
}

RobotomyRequestForm::~RobotomyRequestForm() {

    std::cout << "Destructor Called." << std::endl;
}

RobotomyRequestForm::RobotomyRequestForm( const RobotomyRequestForm& cpy ) : AForm(cpy), _target(cpy._target) {
    
    std::cout << "Copy Constructor Called." << std::endl;
}

RobotomyRequestForm& RobotomyRequestForm::operator=( const RobotomyRequestForm& other ) {
    
    if (this != &other)
        _target = other._target;
    return *this;
}

void RobotomyRequestForm::execute( const Bureaucrat& exec ) const {


    if (this->getSigned() == false)
        throw AForm::FormNotSignedException();
    if (exec.getGrade() > this->getGradeToExe())
        throw AForm::GradeTooLowException("Bureaucrat needs an higher rank to execute a Robotomy.");
    else {
        static int i;
        if (i % 2 == 0) {
            std::cout << "ZzzzZzzzZzzzZzzzZzzzZzzz" << std::endl;
            std::cout << this->_target << " has been robotomised" << std::endl;
        }
        else
            std::cout << this->_target << " has escaped robotomisation." << std::endl;
        i++;
    }
}