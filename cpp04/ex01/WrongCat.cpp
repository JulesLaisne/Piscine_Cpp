/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongCat.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: juleslaisne <juleslaisne@student.42.fr>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/06 16:21:44 by juleslaisne       #+#    #+#             */
/*   Updated: 2023/07/06 16:29:03 by juleslaisne      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "WrongCat.hpp"

WrongCat::WrongCat( void ) : WrongAnimal("Cat") {

    std::cout << this->type << " Constructor called." << std::endl;
}

WrongCat::~WrongCat( void )
{
    std::cout << this->type << " Destructor called." << std::endl;
}

void    WrongCat::makeSound( void ) const {
    
    std::cout << "Brrrr Brrr WrongMiaou WrongMiaou" << std::endl;
}
