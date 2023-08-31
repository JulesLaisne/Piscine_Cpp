/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jlaisne <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/20 16:49:38 by juleslaisne       #+#    #+#             */
/*   Updated: 2023/08/31 13:55:08 by jlaisne          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/Bureaucrat.hpp"
#include "../includes/Form.hpp"
#include "../includes/PresidentialPardonForm.hpp"
#include "../includes/RobotomyRequestForm.hpp"
#include "../includes/ShrubberyCreationForm.hpp"

int main( void ) {

    try {
        
        // Bureaucrat Jules("Jules", 5);
        // Form form("Permis", 10, 1);
        // PresidentialPardonForm Pardon("Michel");
        // RobotomyRequestForm Robot("Michel???");
        // ShrubberyCreationForm Arbres("Parc");

        // Jules.signForm(Pardon);
        // Jules.signForm(Arbres);
        // Pardon.execute(Jules);
        // Jules.signForm(Robot);
        // Robot.execute(Jules);
        // Robot.execute(Jules);
        // Robot.execute(Jules);
        // Robot.execute(Jules);
        // Arbres.execute(Jules);

        Bureaucrat Michel("Michel", 15);
        Form form2("Permis", 10, -1);
        
        Michel.signForm(form2);
        Michel.executeForm(form2);


        Bureaucrat Jules("Jules", 1);
        Form form("Permis d'Axel", 10, 1);
        Jules.signForm(form);
        Jules.executeForm(form);
        std::cout << form << std::endl;
    } 
    catch (std::exception &e) {
        std::cout << e.what() << std::endl;
    }
    
}