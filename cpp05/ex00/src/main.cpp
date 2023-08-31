/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jlaisne <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/20 16:49:38 by juleslaisne       #+#    #+#             */
/*   Updated: 2023/08/28 16:52:18 by jlaisne          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/Bureaucrat.hpp"

int main( void ) {

    try {
    
        Bureaucrat Jules = Bureaucrat("Jules", 1);
        Jules.PromoteGrade();
        Jules.PromoteGrade();
        std::cout << Jules << std::endl;
    }
    
    catch (std::exception & e) {
        
        std::cout << e.what() << std::endl;
    }
}