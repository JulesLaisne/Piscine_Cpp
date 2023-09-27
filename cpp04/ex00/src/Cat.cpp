/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jlaisne <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/05 14:12:55 by juleslaisne       #+#    #+#             */
/*   Updated: 2023/09/25 09:58:23 by jlaisne          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/Cat.hpp"

Cat::Cat( void ) : Animal("Cat") {

    std::cout << this->type << " Constructor called." << std::endl;
}

Cat::~Cat( void )
{
    std::cout << this->type << " Destructor called." << std::endl;
}

Cat::Cat( const Cat& cpy ) {
        
    std::cout << this->type << " Copy Constructor called." << std::endl;
    *this = cpy;
}

Cat& Cat::operator=( const Cat& other ) {

    if (this != &other) {

        this->type = other.type;
    }
    return *this;
}

void    Cat::makeSound( void ) const {
    std::cout << "Brrrr Brrr Miaou Miaou" << std::endl;
}