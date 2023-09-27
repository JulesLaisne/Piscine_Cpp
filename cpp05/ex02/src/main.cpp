/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jlaisne <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/20 16:49:38 by juleslaisne       #+#    #+#             */
/*   Updated: 2023/09/26 15:02:22 by jlaisne          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/Bureaucrat.hpp"
#include "../includes/AForm.hpp"
#include "../includes/PresidentialPardonForm.hpp"
#include "../includes/RobotomyRequestForm.hpp"
#include "../includes/ShrubberyCreationForm.hpp"

int main( void ) {

    try {
        
        Bureaucrat Jules("Jules", 5);
        PresidentialPardonForm Pardon("Michel");
        RobotomyRequestForm Robot("Michel???");
        ShrubberyCreationForm Arbres("Parc");

        Jules.signForm(Pardon);
        Jules.signForm(Arbres);
        Pardon.execute(Jules);
        Jules.signForm(Robot);
        Robot.execute(Jules);
        Robot.execute(Jules);
        Robot.execute(Jules);
        Robot.execute(Jules);
        Arbres.execute(Jules);

        Bureaucrat Michel("Michel", 15);
        // Form form2("Permis", 10, -1);
        
        // Michel.signForm(form2);
        // Michel.executeForm(form2);

        std::cout << Pardon << std::endl;
    } 
    catch (std::exception &e) {
        
        std::cout << e.what() << std::endl;
    }
    
}