/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: juleslaisne <juleslaisne@student.42.fr>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/04 14:09:55 by juleslaisne       #+#    #+#             */
/*   Updated: 2023/09/18 15:19:09 by juleslaisne      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/ClapTrap.hpp"

ClapTrap::ClapTrap(std::string name) : _name(name), _hitPoints(10), _energyPoint(10), _attackDamage(0) {
    
    std::cout << "Constructor called" << std::endl;
}

ClapTrap::~ClapTrap() {
    
    std::cout << "Destructor called" << std::endl;
}

ClapTrap::ClapTrap(const ClapTrap &cpy)
{
    *this = cpy;
    std::cout << "ClapTrap " << this->_name << " has been copied with copy constuctor." << std::endl;
    return;
}

ClapTrap&   ClapTrap::operator=( const ClapTrap& other ) {
    
    this->_name = other._name;
    this->_hitPoints = other._hitPoints;
    this->_energyPoint = other._energyPoint;
    this->_attackDamage = other._attackDamage;
    std::cout << "ClapTrap " << this->_name << " has been copied with copy assignment operator." << std::endl;
    return *this;
}

void ClapTrap::attack(const std::string& target) {

    if (this->_energyPoint > 0)
    {
        this->_energyPoint -= 1;
        std::cout << "ClapTrap " << this->_name << " attacks " << target << ", causing " << this->_attackDamage << " points of damage!" << std::endl;
    }
    else
        std::cout << "ClapTrap " << this->_name << " is out of energy." << std::endl;
    
}

void ClapTrap::takeDamage(unsigned int amount){
    
    if (amount > this->_hitPoints)
    {
        this->_hitPoints = 0;
        std::cout << "ClapTrap " << this->_name << " was attacked." << " It has no hit points left!" << std::endl;
    }
    else
    {
        this->_hitPoints -= amount;
        std::cout << "ClapTrap " << this->_name << " was attacked" << ", causing " << amount << " points of damage!" << std::endl;
    }
}

void ClapTrap::beRepaired(unsigned int amount) {

    if (this->_energyPoint > 0)
    {
        this->_hitPoints += amount;
        this->_energyPoint -= 1;
        std::cout << "ClapTrap " << this->_name << " was repaired by " << amount << ". It has " << this->_hitPoints << " left." << std::endl;
    }
    else
        std::cout << "ClapTrap " << this->_name << " ran out of energy. Repairs impossible." << std::endl;

}