/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jlaisne <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/10 16:31:44 by juleslaisne       #+#    #+#             */
/*   Updated: 2023/09/20 10:46:52 by jlaisne          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/Brain.hpp"
#include <sstream>

Brain::Brain( void ) {
    
    std::stringstream   ss;
    for ( int i = 0; i < 100; i++ ) {
        ss << i;
        this->ideas[i] = "ideas " + ss.str();
        ss.str(std::string());
    }
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

void Brain::printIdeas( void ) const {
    
    for ( int i = 0; i < 100; i++ ) {
        std::cout << this->ideas[i] << std::endl;
    }
}