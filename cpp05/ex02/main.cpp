/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: juleslaisne <juleslaisne@student.42.fr>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/20 16:49:38 by juleslaisne       #+#    #+#             */
/*   Updated: 2023/07/21 15:10:38 by juleslaisne      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"
#include "Form.hpp"

int main( void ) {

    try {
        
        Bureaucrat bureaucrat("Jules",11);
        Form form("Permis", 10, 1);

        bureaucrat.signForm(form);

        std::cout << form << std::endl;
    } 
    catch (std::exception &e) {
        std::cout << e.what() << std::endl;
    }
    
}