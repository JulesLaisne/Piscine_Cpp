/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: juleslaisne <juleslaisne@student.42.fr>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/04 14:09:55 by juleslaisne       #+#    #+#             */
/*   Updated: 2023/07/12 12:31:37 by juleslaisne      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

ClapTrap::ClapTrap(std::string name) : _name(name), _HitPoint(10), _EnergyPoint(10), _AttackDamage(0) {
    
    std::cout << "Constructor called" << std::endl;
}

ClapTrap::~ClapTrap() {
    
    std::cout << "Destructor called" << std::endl;
}

ClapTrap::ClapTrap(const ClapTrap &cpy)
{
    *this = cpy;
    std::cout << "[ ClapTrap ] - " << this->_name << " has been copied with copy constuctor." << std::endl;
    return;
}

ClapTrap&   ClapTrap::operator=( const ClapTrap& other ) {
    
    this->_name = other._name;
    this->_hitPoints = other._hitPoints;
    this->_energyPoints = other._energyPoints;
    this->_attackDamage = other._attackDamage;
    std::cout << "[ ClapTrap ] - " << this->_name << " has been copied with copy assignment operator." << std::endl;
    return *this;
}

void ClapTrap::attack(const std::string& target) {

    if (this->_EnergyPoint > 0)
    {
        this->_EnergyPoint -= 1;
        std::cout << "ClapTrap " << this->_name << " attacks " << target << ", causing " << this->_AttackDamage << " points of damage!" << std::endl;
    }
    else
        std::cout << "ClapTrap " << this->_name << " is out of energy." << std::endl;
    
}

void ClapTrap::takeDamage(unsigned int amount){
    
    if (amount > this->_HitPoint)
    {
        this->_HitPoint = 0;
        std::cout << "ClapTrap " << this->_name << "was attacked." << " It has no hit points left!" << std::endl;
    }
    else
    {
        this->_HitPoint -= amount;
        std::cout << "ClapTrap " << this->_name << "was attacked" << ", causing " << amount << " points of damage!" << std::endl;
    }
}

void ClapTrap::beRepaired(unsigned int amount) {

    if (this->_EnergyPoint > 0)
    {
        this->_HitPoint += amount;
        if (this->_HitPoint > 10)
            this->_HitPoint = 10;
        this->_EnergyPoint -= 1;
        std::cout << "ClapTrap " << this->_name << " was repaired by " << amount << ". It has " << this->_HitPoint << " left." << std::endl;
    }
    else
        std::cout << "ClapTrap " << this->_name << " ran out of energy. Repairs impossible." << std::endl;

}