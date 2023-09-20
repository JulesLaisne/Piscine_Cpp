/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jlaisne <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/21 13:22:08 by juleslaisne       #+#    #+#             */
/*   Updated: 2023/09/20 11:00:53 by jlaisne          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/Form.hpp"

Form::Form(const std::string name, int gradeToSign, int gradeToExe) : _name(name), _signed(false), _gradeToSign(gradeToSign), _gradeToExe(gradeToExe) {

    if (gradeToSign < 1)
        throw Form::GradeTooLowException("Grade too low to be assigned as a minimum to sign form.");
    if (gradeToExe < 1)
        throw Form::GradeTooLowException("Grade too low to be assigned as a form executable.");
    if (gradeToSign > 150)
        throw Form::GradeTooHighException("Grade too high to be assigned as a minimum to sign form.");
    if (gradeToExe > 150)
        throw Form::GradeTooHighException("Grade too high to be assigned as a form executable.");
}

Form::~Form( void ) {
    
}

Form::Form( const Form& cpy ) : _name(cpy._name),_signed(cpy._signed), _gradeToSign(cpy._gradeToSign),  _gradeToExe(cpy._gradeToExe) {

}

std::string Form::getName() const {
    return _name;
}

bool   Form::getSigned() const {
    return _signed;
}

int   Form::getGradeToSign() const {
    return _gradeToSign;
}

int   Form::getGradeToExe() const {
    return _gradeToExe;
}

Form& Form::operator=(const Form& other) {
        
        if (this == &other) {
            return *this;
        }
        this->_signed = other.getSigned();
    
        return *this;
}

void    Form::beSigned( const Bureaucrat& bureaucrat ) {

    if (bureaucrat.getGrade() < _gradeToSign) {
        _signed = true;
    }
    else
        throw Form::GradeTooLowException("Bureaucrat's grade isn't high enough to sign");
}

void    Form::execute(Bureaucrat const & executor) const {

    if (executor.getGrade() > _gradeToExe)
        throw Form::FormNotExecutable();
    if (_signed == false)
        throw Form::FormNotSignedException();
    return;
}

std::ostream& operator<<( std::ostream& os, const Form& form ) {

    os << form.getName() << " is a form that needs a minimum grade of " \
        << form.getGradeToSign() << " and " << form.getGradeToExe() << " to execute." << "Its signed status is " << form.getSigned() << ".";
    return os;
}