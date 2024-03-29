/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PresidentialPardonForm.cpp                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jlaisne <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/27 13:57:15 by juleslaisne       #+#    #+#             */
/*   Updated: 2023/09/27 14:08:10 by jlaisne          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/PresidentialPardonForm.hpp"

PresidentialPardonForm::PresidentialPardonForm( const std::string& target ) : AForm("Presidential Pardon Form", 25, 5),  _target(target) {
    
    std::cout << "Constructor Called." << std::endl;
}

PresidentialPardonForm::~PresidentialPardonForm() {

    std::cout << "Destructor Called." << std::endl;
}

PresidentialPardonForm::PresidentialPardonForm( const PresidentialPardonForm& cpy ) : AForm(cpy), _target(cpy._target) {
    
    std::cout << "Copy Constructor Called." << std::endl;
}

PresidentialPardonForm& PresidentialPardonForm::operator=( const PresidentialPardonForm& other ) {
    
    if (this != &other)
        this->_target = other._target;
    return *this;
}

void PresidentialPardonForm::execute( const Bureaucrat& exec ) const {

    if (this->getSigned() == false)
        throw AForm::FormNotSignedException();
    if (exec.getGrade() > this->getGradeToExe())
        throw AForm::GradeTooLowException("Bureaucrat needs an higher rank in order to sign this form.");
    else
        std::cout << _target << " has been pardoned by Zaphod Beeblebrox." << std::endl;
}
