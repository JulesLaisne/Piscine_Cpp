/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jlaisne <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/23 11:33:22 by jlaisne           #+#    #+#             */
/*   Updated: 2023/05/23 14:09:24 by jlaisne          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie::Zombie(std::string name) : _name(name){
    
    
    std::cout << this->_name << ": Created." << std::endl;
}

Zombie::~Zombie(){

    std::cout << this->_name << ": destroyed." << std::endl;
}

void    Zombie::announce( void ){

    std::cout << this->_name << ": BraiiiiiiinnnzzzZ..." << std::endl;
}