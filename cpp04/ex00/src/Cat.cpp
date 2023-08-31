/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jlaisne <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/05 14:12:55 by juleslaisne       #+#    #+#             */
/*   Updated: 2023/08/28 16:48:34 by jlaisne          ###   ########.fr       */
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

void    Cat::makeSound( void ) const {
    std::cout << "Brrrr Brrr Miaou Miaou" << std::endl;
}