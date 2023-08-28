/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: juleslaisne <juleslaisne@student.42.fr>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/05 14:12:55 by juleslaisne       #+#    #+#             */
/*   Updated: 2023/07/05 14:37:12 by juleslaisne      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"

Cat::Cat( void ) : Animal("Cat") {

    std::cout << this->type << " Constructor called." << std::endl;
}

Cat::~Cat( void )
{
    std::cout << this->type << " Destructor called." << std::endl;
}

void    Cat::makeSound( void ) const {
    std::cout << "Brrrr Brrr Miaou Miaou" << std::endl;
}