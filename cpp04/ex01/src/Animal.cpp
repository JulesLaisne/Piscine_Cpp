/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jlaisne <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/05 13:20:17 by juleslaisne       #+#    #+#             */
/*   Updated: 2023/08/28 16:50:05 by jlaisne          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/Animal.hpp"

Animal::Animal( void ) : type("Animal") {

    std::cout << "Default Constructor called." << std::endl;
}

Animal::Animal( std::string type ) : type(type) {

    std::cout << "Constructor called with type: " << this->type << std::endl;
}

Animal::~Animal( void ) {

    std::cout << "Animal Destructor called." << std::endl;
}

Animal::Animal( const Animal& cpy )
{
    std::cout << "Animal copy constructor called" << std::endl;
    *this = cpy;
}

Animal& Animal::operator=( const Animal& other )
{
    std::cout << "Animal assignment operator called" << std::endl;
    if ( this != &other ) {
        this->type = other.type;
    }
    return *this;
}

std::string Animal::getType( void ) const {

    return this->type;
}

void    Animal::makeSound( void ) const {
    
    std::cout << this->type << " make sound called." << std::endl;
}
