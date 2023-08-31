/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FlagTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jlaisne <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/05 11:24:09 by juleslaisne       #+#    #+#             */
/*   Updated: 2023/08/28 16:47:19 by jlaisne          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/FlagTrap.hpp"

FlagTrap::FlagTrap(std::string name) : ClapTrap(name) {

    this->_AttackDamage = 30;
    this->_EnergyPoints = 100;
    this->_HitPoints = 100;

    std::cout << "Flag Constructor called" << std::endl;
}

FlagTrap::~FlagTrap() {

    std::cout << "Flag Destructor called" << std::endl;
}

void    FlagTrap::highFivesGuys( void ) {

    if (this->_EnergyPoints <= 0)
        std::cout << this->_name << "is out of energy!" << std::endl;
    std::cout << "Give me a High Five please!" << std::endl;
    this->_EnergyPoints -= 1;
}