/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jlaisne <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/20 16:49:50 by juleslaisne       #+#    #+#             */
/*   Updated: 2023/09/26 15:02:01 by jlaisne          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/Bureaucrat.hpp"

Bureaucrat::Bureaucrat( const std::string name, int grade ) : _name(name), _grade(grade){

    if (_grade < 1)
        throw Bureaucrat::GradeTooLowException("The maximum Grade is 1, cannot attribute grade to 0 or lower.");
    if (_grade > 150)
        throw Bureaucrat::GradeTooHighException("The minimum Grade is 150, cannot attribute grade to 151 or higher.");
    std::cout << "Default constructor called" << std::endl;
}

Bureaucrat::~Bureaucrat( ) {

    std::cout << "Destructor called" << std::endl;
}

Bureaucrat::Bureaucrat( const Bureaucrat& cpy ) : _name(cpy._name), _grade(cpy._grade) {

    std::cout << "Copy constructor called" << std::endl;
}

Bureaucrat& Bureaucrat::operator=(const Bureaucrat& other) {
        
        if (this == &other) {
            return *this;
        }
        std::cout << "Copy assignment operator called" << std::endl;
        this->_grade = other.getGrade();
        return *this;
}

int    Bureaucrat::getGrade() const {

    return this->_grade;
}

std::string    Bureaucrat::getName() const {

    return this->_name;
}

void    Bureaucrat::PromoteGrade( void ) {

    if (_grade - 1 < 1)
        throw Bureaucrat::GradeTooLowException("The maximum Grade is 1, cannot attribute grade to 0 or lower.");
    _grade--;
}

void    Bureaucrat::DemoteGrade( void ) {

    if (_grade + 1 > 150)
        throw Bureaucrat::GradeTooHighException("The minimum Grade is 150, cannot attribute grade to 151 or higher.");
    _grade++;
}

void        Bureaucrat::signForm(AForm& form ) {

    try {
        
        form.beSigned( *this );
        std::cout << *this << " signed " << form.getName() << std::endl;
    } 
    catch (AForm::GradeTooLowException &e) {
        
        std::cout << _name << " coulnd't sign " << form.getName() << " because " << e.what() << std::endl;
    }   
}

void        Bureaucrat::executeForm( AForm const & form) {

    try {
        
        form.execute( *this );
        std::cout << _name << " executed " << form.getName() << std::endl;
    } 
    catch (AForm::FormNotExecutable &e) {

      std::cout << e.what() << std::endl;
    }
}

std::ostream& operator<<(std::ostream& os, const Bureaucrat& bureaucrat) {
    
        os << bureaucrat.getName() << ", bureaucrat grade " << bureaucrat.getGrade();
        return os;
}
