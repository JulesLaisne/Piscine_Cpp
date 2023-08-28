/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: juleslaisne <juleslaisne@student.42.fr>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/05 14:02:29 by juleslaisne       #+#    #+#             */
/*   Updated: 2023/07/05 14:30:01 by juleslaisne      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"

Dog::Dog( void ) : Animal("Dog") {

    std::cout << this->type << " Constructor called." << std::endl;
}

Dog::~Dog( void )
{
    std::cout << this->type << " Destructor called." << std::endl;
}

void    Dog::makeSound( void ) const {

    std::cout << "Grrrr Grrr Ouaf Ouaf Ouaf" << std::endl;
}
