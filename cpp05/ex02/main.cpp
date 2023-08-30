/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: juleslaisne <juleslaisne@student.42.fr>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/20 16:49:38 by juleslaisne       #+#    #+#             */
/*   Updated: 2023/08/30 15:07:44 by juleslaisne      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"
#include "Form.hpp"
#include "PresidentialPardonForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "ShrubberyCreationForm.hpp"

int main( void ) {

    try {
        
        Bureaucrat Jules("Jules", 5);
        Form form("Permis", 10, 1);
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

        std::cout << form << std::endl;
    } 
    catch (std::exception &e) {
        std::cout << e.what() << std::endl;
    }
    
}