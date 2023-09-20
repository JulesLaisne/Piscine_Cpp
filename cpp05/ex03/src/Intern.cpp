/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Intern.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jlaisne <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/06 10:32:28 by jlaisne           #+#    #+#             */
/*   Updated: 2023/09/20 11:01:45 by jlaisne          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/Intern.hpp"

Intern::Intern() {
    
}

Intern::~Intern() {

}

Intern::Intern( const Intern& cpy ) {
    
    *this = cpy;
}

Intern& Intern::operator=( const Intern& other ) {

    if (this != &other) {
        
    }
    return *this;
}

Form* Intern::makePresidentialPardonForm( std::string const & target ) {

    return (new PresidentialPardonForm(target));
}

Form* Intern::makeRobotomyRequestForm( std::string const & target ) {

    return (new RobotomyRequestForm(target));
}

Form* Intern::makeShrubberyCreationForm( std::string const & target ) {

    return (new ShrubberyCreationForm(target));
}

Form* Intern::makeForm( std::string const & formName, std::string const & target ) {

    std::string forms[3] = {"presidential pardon", "robotomy request", "shrubbery creation"};
    Form* (Intern::*member[3])(std::string const & target) = {
        &Intern::makePresidentialPardonForm,
        &Intern::makeRobotomyRequestForm,
        &Intern::makeShrubberyCreationForm
    };

    for (size_t i = 0; i < 3; i++)
        {
            if (!forms[i].compare(formName))
            {
                std::cout << "Intern creates " << formName << std::endl;
                return (this->*member[i])(target);
            }
        }
    throw FormDoesNotExist();
}