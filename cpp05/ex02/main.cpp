/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jlaisne <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/20 16:49:38 by juleslaisne       #+#    #+#             */
/*   Updated: 2023/08/28 13:53:07 by jlaisne          ###   ########.fr       */
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