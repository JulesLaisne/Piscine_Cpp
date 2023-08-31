/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jlaisne <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/20 16:49:50 by juleslaisne       #+#    #+#             */
/*   Updated: 2023/08/28 16:52:24 by jlaisne          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/Bureaucrat.hpp"

Bureaucrat::Bureaucrat( const std::string name, int grade ) : _name(name), _grade(grade){

    if (_grade < 1)
        throw Bureaucrat::gradeTooLowException("The maximum Grade is 1, cannot attribute grade to 0 or lower.");
    if (_grade > 150)
        throw Bureaucrat::gradeTooHighException("The minimum Grade is 150, cannot attribute grade to 151 or higher.");
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
        throw Bureaucrat::gradeTooLowException("The maximum Grade is 1, cannot attribute grade to 0 or lower.");
    _grade--;
}

void    Bureaucrat::DemoteGrade( void ) {

    if (_grade + 1 > 150)
        throw Bureaucrat::gradeTooHighException("The minimum Grade is 150, cannot attribute grade to 151 or higher.");
    _grade++;
}

std::ostream& operator<<(std::ostream& os, const Bureaucrat& bureaucrat) {
    
        os << bureaucrat.getName() << ", bureaucrat grade " << bureaucrat.getGrade();
        return os;
}
