/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: juleslaisne <juleslaisne@student.42.fr>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/10 16:31:44 by juleslaisne       #+#    #+#             */
/*   Updated: 2023/07/15 15:57:50 by juleslaisne      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Brain.hpp"

Brain::Brain( void ) {
    
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