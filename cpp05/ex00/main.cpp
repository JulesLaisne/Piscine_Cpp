/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: juleslaisne <juleslaisne@student.42.fr>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/20 16:49:38 by juleslaisne       #+#    #+#             */
/*   Updated: 2023/07/21 13:10:23 by juleslaisne      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"

int main( void ) {

    try {

        Bureaucrat Jules = Bureaucrat("Jules", 149);
        Jules.DemoteGrade();
        Jules.DemoteGrade();
        std::cout << Jules << std::endl;
    
    }
    catch (std::exception & e) {
        
        std::cout << e.what() << std::endl;
    }
    
}