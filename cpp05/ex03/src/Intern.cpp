/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Intern.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jlaisne <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/06 10:32:28 by jlaisne           #+#    #+#             */
/*   Updated: 2023/09/26 15:05:35 by jlaisne          ###   ########.fr       */
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

AForm* Intern::makePresidentialPardonForm( std::string const & target ) {

    return (new PresidentialPardonForm(target));
}

AForm* Intern::makeRobotomyRequestForm( std::string const & target ) {

    return (new RobotomyRequestForm(target));
}

AForm* Intern::makeShrubberyCreationForm( std::string const & target ) {

    return (new ShrubberyCreationForm(target));
}

AForm* Intern::makeForm( std::string const & formName, std::string const & target ) {

    std::string forms[3] = {"presidential pardon", "robotomy request", "shrubbery creation"};
    AForm* (Intern::*member[3])(std::string const & target) = {
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