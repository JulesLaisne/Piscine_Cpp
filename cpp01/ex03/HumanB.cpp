/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jlaisne <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/23 16:47:16 by jlaisne           #+#    #+#             */
/*   Updated: 2023/05/24 13:26:50 by jlaisne          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanB.hpp"

HumanB::HumanB(const std::string name) : _name(name), _Weapon(NULL) {

}

HumanB::~HumanB(){

}

void    HumanB::attack( void ){

    if (this->_Weapon)
        std::cout << this->_name << " attacks with their " << this->_Weapon->get_name() << std::endl;
    else
        std::cout << this->_name << " has no weapon." << std::endl;
}

void    HumanB::setWeapon(Weapon& Weapon){
    
    this->_Weapon = &Weapon;
}
