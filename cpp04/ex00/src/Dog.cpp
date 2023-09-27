/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jlaisne <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/05 14:02:29 by juleslaisne       #+#    #+#             */
/*   Updated: 2023/09/25 09:57:47 by jlaisne          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/Dog.hpp"

Dog::Dog( void ) : Animal("Dog") {

    std::cout << this->type << " Constructor called." << std::endl;
}

Dog::~Dog( void )
{
    std::cout << this->type << " Destructor called." << std::endl;
}

Dog::Dog( const Dog &cpy) {
    
        std::cout << this->type << " Copy Constructor called." << std::endl;
        *this = cpy;
}

Dog& Dog::operator=( const Dog& other ) {

    if (this != &other) {

        this->type = other.type;
    }
    return *this;
}

void    Dog::makeSound( void ) const {

    std::cout << "Grrrr Grrr Ouaf Ouaf Ouaf" << std::endl;
}
