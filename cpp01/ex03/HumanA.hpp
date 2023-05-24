/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jlaisne <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/23 16:45:49 by jlaisne           #+#    #+#             */
/*   Updated: 2023/05/24 10:31:42 by jlaisne          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HUMANA_H
# define HUMANA_H

#include "Weapon.hpp"

class HumanA
{
    private:
    
        std::string _name;
        Weapon&     _Weapon;
    
    public:
    
        HumanA(const std::string name, Weapon& Weapon);
        ~HumanA();

        void    attack( void );
};

#endif