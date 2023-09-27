/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AForm.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jlaisne <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/21 13:22:08 by juleslaisne       #+#    #+#             */
/*   Updated: 2023/09/26 14:49:55 by jlaisne          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/AForm.hpp"

AForm::AForm(const std::string name, int gradeToSign, int gradeToExe) : _name(name), _signed(false), _gradeToSign(gradeToSign), _gradeToExe(gradeToExe) {

    if (gradeToSign < 1)
        throw AForm::GradeTooLowException("Grade too low to be assigned as a minimum to sign form.");
    if (gradeToExe < 1)
        throw AForm::GradeTooLowException("Grade too low to be assigned as a form executable.");
    if (gradeToSign > 150)
        throw AForm::GradeTooHighException("Grade too high to be assigned as a minimum to sign form.");
    if (gradeToExe > 150)
        throw AForm::GradeTooHighException("Grade too high to be assigned as a form executable.");
    std::cout << "Default constructor called" << std::endl;
}

AForm::~AForm( void ) {
    
    std::cout << "Destructor called" << std::endl;
}

AForm::AForm( const AForm& cpy ) : _name(cpy._name), _signed(cpy._signed), _gradeToSign(cpy._gradeToSign), _gradeToExe(cpy._gradeToExe) {

    std::cout << "Copy constructor called" << std::endl;
}

std::string AForm::getName() const {
    return _name;
}

bool   AForm::getSigned() const {
    return _signed;
}

int   AForm::getGradeToSign() const {
    return _gradeToSign;
}

int   AForm::getGradeToExe() const {
    return _gradeToExe;
}

AForm& AForm::operator=(const AForm& other) {
        
        if (this == &other) {
            return *this;
        }
        std::cout << "Copy assignment operator called" << std::endl;
        this->_signed = other.getSigned();
    
        return *this;
}

void    AForm::beSigned( const Bureaucrat& bureaucrat ) {

    if (bureaucrat.getGrade() <= _gradeToSign) {
        _signed = true;
    }
    else
        throw AForm::GradeTooLowException("Bureaucrat's grade isn't high enough to sign");
}

void    AForm::execute(Bureaucrat const & executor) const {

    if (executor.getGrade() > _gradeToExe)
        throw AForm::FormNotExecutable();
    if (_signed == false)
        throw AForm::FormNotSignedException();
    return;
}

std::ostream& operator<<( std::ostream& os, const AForm& form ) {

    os << form.getName() << " is a form that needs a minimum grade of " \
        << form.getGradeToSign() << " and " << form.getGradeToExe() << " to execute." << "Its signed status is " << form.getSigned() << ".";
    return os;
}