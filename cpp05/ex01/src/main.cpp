/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jlaisne <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/20 16:49:38 by juleslaisne       #+#    #+#             */
/*   Updated: 2023/08/28 16:53:09 by jlaisne          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/Bureaucrat.hpp"
#include "../includes/Form.hpp"

int main( void ) {

    try {
        
        Bureaucrat bureaucrat("Jules",11);
        Form form("Permis", 10, 1);
        Form form2 = form;

        bureaucrat.signForm(form2);

        std::cout << form2 << std::endl;
    } 
    catch (std::exception &e) {
        std::cout << e.what() << std::endl;
    }
    
}