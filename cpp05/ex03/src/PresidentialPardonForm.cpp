/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PresidentialPardonForm.cpp                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jlaisne <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/27 13:57:15 by juleslaisne       #+#    #+#             */
/*   Updated: 2023/09/20 11:02:11 by jlaisne          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/PresidentialPardonForm.hpp"

PresidentialPardonForm::PresidentialPardonForm( const std::string& target ) : Form("Presidential Pardon Form", 25, 5), _target(target) {
    
}

PresidentialPardonForm::~PresidentialPardonForm() {

}

PresidentialPardonForm::PresidentialPardonForm( const PresidentialPardonForm& cpy ) : Form(cpy), _target(cpy._target) {
    
}

PresidentialPardonForm& PresidentialPardonForm::operator=( const PresidentialPardonForm& other ) {
    
    if (this != &other)
        this->_target = other._target;
    return *this;
}

void PresidentialPardonForm::execute( const Bureaucrat& exec ) const {

    if (this->getSigned() == false)
        throw Form::FormNotSignedException();
    if (exec.getGrade() > this->getGradeToExe())
        throw Form::GradeTooLowException("Bureaucrat needs an higher rank in order to sign this form.");
    else
        std::cout << _target << " has been pardoned by Zaphod Beeblebrox." << std::endl;
}
