/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jlaisne <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/04 08:57:17 by jlaisne           #+#    #+#             */
/*   Updated: 2023/09/04 11:35:33 by jlaisne          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/Span.hpp"

int main ( void ) {

    try {
    
        Span    Tab( 10 );

        Tab.addNumber(50);
        Tab.addNumber(609);
        Tab.addNumber(60);
        Tab.addNumber(40);
        Tab.addNumber(30);
        Tab.addNumber(20);
        Tab.addNumber(25);
        
        
        std::cout << Tab.longestSpan() << std::endl;
        std::cout << Tab.shortestSpan() << std::endl;

        std::vector<int>    vec = { 1, 2, 3, 4, 5, 6, 7, 8, 9 };
        Tab.addMultipleNumber( vec.begin(), vec.end() );
    }
    
    catch (std::exception &e) {

        std::cerr << e.what() << std::endl;
    }
}