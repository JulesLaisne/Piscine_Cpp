/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jlaisne <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/20 16:49:38 by juleslaisne       #+#    #+#             */
/*   Updated: 2023/09/28 10:03:22 by jlaisne          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/Bureaucrat.hpp"

int main( void ) {

    try {
    
        Bureaucrat Jules = Bureaucrat("Jules", 1);
        Jules.PromoteGrade();
        Jules.PromoteGrade();
    }
    
    catch (std::exception & e) {
        
        std::cout << e.what() << std::endl;
    }

    try {
    
        Bureaucrat Jules = Bureaucrat("Jules", 1);
        Jules.DemoteGrade();
        std::cout << Jules.getGrade() << std::endl;
        std::cout << Jules << std::endl;
    }
    
    catch (std::exception & e) {
        
        std::cout << e.what() << std::endl;
    }

    try {
    
        Bureaucrat Jules = Bureaucrat("Jules", -1);
        std::cout << Jules << std::endl;
    }
    
    catch (std::exception & e) {
        
        std::cout << e.what() << std::endl;
    }
}