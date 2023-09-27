/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jlaisne <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/05 14:12:55 by juleslaisne       #+#    #+#             */
/*   Updated: 2023/09/20 17:43:39 by jlaisne          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/Cat.hpp"

Cat::Cat( void ) : Animal("Cat") {

    std::cout << this->type << " Constructor called." << std::endl;
    this->brain = new Brain();
}

Cat::~Cat( void )
{
    delete this->brain;
    std::cout << this->type << " Destructor called." << std::endl;
}

void    Cat::makeSound( void ) const {
    std::cout << "Brrrr Brrr Miaou Miaou" << std::endl;
}

Cat::Cat(const Cat& cpy) {

    std::cout << this->type << "Cat Copy Constructor called." << std::endl;
    *this = cpy;
}

Cat& Cat::operator=( const Cat& other ) {

    if (this != &other) {

        this->type = other.type;
        this->brain = new Brain ( *other.brain );
    }
    return *this;
}

Brain * Cat::getBrain( void ) const {

    return this->brain;
}