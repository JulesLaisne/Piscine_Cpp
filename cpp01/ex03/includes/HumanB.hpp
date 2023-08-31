/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jlaisne <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/23 16:47:19 by jlaisne           #+#    #+#             */
/*   Updated: 2023/05/24 13:26:53 by jlaisne          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HUMANB_H
# define HUMANB_H

#include "Weapon.hpp"

class HumanB
{
    private:
    
        std::string _name;
        Weapon*     _Weapon;
    
    public:
    
        HumanB(const std::string name);
        ~HumanB();

        void    attack( void );
        void    setWeapon(Weapon& Weapon);
};

#endif