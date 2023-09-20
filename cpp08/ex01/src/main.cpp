/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jlaisne <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/04 08:57:17 by jlaisne           #+#    #+#             */
/*   Updated: 2023/09/20 15:17:11 by jlaisne          ###   ########.fr       */
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

        std::vector<int> vec;
        vec.push_back(5);
        vec.push_back(2);
        vec.push_back(33);
        vec.push_back(4);
        vec.push_back(1);
        Tab.addMultipleNumber( vec.begin(), vec.end() );
    }
    
    catch (std::exception &e) {

        std::cerr << e.what() << std::endl;
    }
}