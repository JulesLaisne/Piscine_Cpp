/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jlaisne <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/20 16:49:38 by juleslaisne       #+#    #+#             */
/*   Updated: 2023/09/26 15:06:06 by jlaisne          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/Bureaucrat.hpp"
#include "../includes/AForm.hpp"
#include "../includes/PresidentialPardonForm.hpp"
#include "../includes/RobotomyRequestForm.hpp"
#include "../includes/ShrubberyCreationForm.hpp"
#include "../includes/Intern.hpp"

int main( void ) {

    try {
        
        Intern LeBouffe;
        Bureaucrat Jules("Jules", 5);

        AForm* form = LeBouffe.makeForm("presidential pardon", "Michel");

        Jules.signForm(*form);
        Jules.executeForm(*form);
        std::cout << *form << std::endl;        

    } 
    catch (std::exception &e) {
        std::cout << e.what() << std::endl;
    }
    
}