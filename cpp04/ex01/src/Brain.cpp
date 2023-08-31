/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jlaisne <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/10 16:31:44 by juleslaisne       #+#    #+#             */
/*   Updated: 2023/08/31 08:57:51 by jlaisne          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/Brain.hpp"

Brain::Brain( void ) {
    
    // for ( int i = 0; i < 100; i++ ) {
    //         this->ideas[i] = "ideas" + i;
    // }
    std::cout << "Brain constructor called." << std::endl;
}

Brain::~Brain( void ) {
    
    std::cout << "Brain destructor called." << std::endl;
}

Brain::Brain( const Brain& cpy )
{
    std::cout << "Brain copy constructor called." << std::endl;
    *this = cpy;
}

Brain& Brain::operator=( const Brain& other )
{
    if ( this != &other ) {
        for ( int i = 0; i < 100; i++ ) {
            this->ideas[i] = other.ideas[i];
        }
    }
    return *this;
}