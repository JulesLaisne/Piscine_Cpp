/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: juleslaisne <juleslaisne@student.42.fr>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/05 10:57:23 by juleslaisne       #+#    #+#             */
/*   Updated: 2023/07/05 11:30:58 by juleslaisne      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"

ScavTrap::ScavTrap(std::string name) : ClapTrap(name) {

    this->_HitPoints = 100;
    this->_EnergyPoints = 50;
    this->_AttackDamage = 20;
    std::cout << "Scav Constructor called" << std::endl;
}

ScavTrap::~ScavTrap() {
    
    std::cout << "Scav Destructor called" << std::endl;
}

void    ScavTrap::attack(const std::string& target) {

    if (this->_EnergyPoints > 0)
    {
        this->_EnergyPoints -= 1;
        std::cout << "ScavTrap " << this->_name << " attacks " << target << ", causing " << this->_AttackDamage << " points of damage!" << std::endl;
    }
    else
        std::cout << "ScavTrap " << this->_name << " is out of energy." << std::endl;
    
}

void    ScavTrap::guardGate( void ) {

    if (this->_EnergyPoints <= 0)
        std::cout << this->_name << "is out of energy!" << std::endl;
    this->_EnergyPoints -= 1;
    std::cout << this->_name << "entered Gate Keeper mode." << std::endl;
}