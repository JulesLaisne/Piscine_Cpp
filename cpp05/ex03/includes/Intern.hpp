/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Intern.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jlaisne <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/06 10:32:02 by jlaisne           #+#    #+#             */
/*   Updated: 2023/09/06 10:53:19 by jlaisne          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef INTERN_HPP
# define INTERN_HPP

#include "Bureaucrat.hpp"
#include "Form.hpp"
#include "PresidentialPardonForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "ShrubberyCreationForm.hpp"

class Intern {

    public:

        Intern();
        ~Intern();
        Intern( const Intern& cpy );

        Intern& operator=( const Intern& other );

        Form* makeForm(std::string const & formName, std::string const & target);
        Form* makePresidentialPardonForm(std::string const & target);
        Form* makeRobotomyRequestForm(std::string const & target);
        Form* makeShrubberyCreationForm(std::string const & target);

        class FormDoesNotExist : public std::exception {

          virtual const char *what() const throw() {
            return "Form does not exist";
          }  
        };
};

#endif