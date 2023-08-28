/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: juleslaisne <juleslaisne@student.42.fr>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/04 14:05:02 by juleslaisne       #+#    #+#             */
/*   Updated: 2023/07/12 12:33:24 by juleslaisne      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CLAPTRAP_HPP
# define CLAPTRAP_HPP

#include <iostream>

class ClapTrap 
{

    protected:
    
        std::string     _name;
        unsigned int    _HitPoints;
        unsigned int    _EnergyPoints;
        unsigned int    _AttackDamage;

    public:
    
        ClapTrap(std::string name);
        ~ClapTrap();
        ClapTrap(const ClapTrap &cpy);


        ClapTrap&   operator=(const ClapTrap& other);

        void attack(const std::string& target);
        void takeDamage(unsigned int amount);
        void beRepaired(unsigned int amount);
    
};

#endif