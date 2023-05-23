/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jlaisne <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/23 14:37:40 by jlaisne           #+#    #+#             */
/*   Updated: 2023/05/23 14:59:57 by jlaisne          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie::Zombie( void ){
    
}

Zombie::~Zombie(){
    
}

void    Zombie::announce( void ){

    std::cout << this->_name << ": BraiiiiiiinnnzzzZ..."  << std::endl;
}

void    Zombie::set_name( const std::string name ){

    this->_name = name;
}