/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jlaisne <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/05 10:57:23 by juleslaisne       #+#    #+#             */
/*   Updated: 2023/09/20 11:28:46 by jlaisne          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/ScavTrap.hpp"

ScavTrap::ScavTrap(std::string name) : ClapTrap(name) {

    this->_hitPoints = 100;
    this->_energyPoints = 50;
    this->_attackDamage = 20;
    std::cout << "Scav Constructor called" << std::endl;
}

ScavTrap::~ScavTrap() {
    
    std::cout << "Scav Destructor called" << std::endl;
}

void    ScavTrap::attack(const std::string& target) {

    if (this->_energyPoints > 0)
    {
        this->_energyPoints -= 1;
        std::cout << "ScavTrap " << this->_name << " attacks " << target << ", causing " << this->_attackDamage << " points of damage!" << std::endl;
    }
    else
        std::cout << "ScavTrap " << this->_name << " is out of energy." << std::endl;
    
}

void    ScavTrap::guardGate( void ) {

    if (this->_energyPoints <= 0)
        std::cout << this->_name << " is out of energy!" << std::endl;
    else {
        this->_energyPoints -= 1;
        std::cout << this->_name << " entered Gate Keeper mode." << std::endl;
    }
}