/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongAnimal.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jlaisne <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/05 14:26:44 by juleslaisne       #+#    #+#             */
/*   Updated: 2023/08/28 16:49:04 by jlaisne          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/WrongAnimal.hpp"

WrongAnimal::WrongAnimal( void ) : type("WrongAnimal") {

    std::cout << "Wrong Default Constructor called: " << this->type << std::endl;
}

WrongAnimal::WrongAnimal( std::string type ) : type(type) {

    std::cout << "Wrong Constructor called with type: " << this->type << std::endl;
}

WrongAnimal::~WrongAnimal( void ) {

    std::cout << "Wrong Destructor called with type: " << this->type << std::endl;
}

std::string WrongAnimal::getType( void ) const {

    return this->type;
}

void    WrongAnimal::makeSound( void ) const {
    
    std::cout << this->type << " make sound called." << std::endl;
}
