/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jlaisne <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/23 16:45:49 by jlaisne           #+#    #+#             */
/*   Updated: 2023/05/23 17:00:05 by jlaisne          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Weapon.hpp"

class HumanA
{
    private:
    
    std::string _name;
    Weapon      _Weapon;
    
    public:
    
        HumanA(std::string name, Weapon Weapon);
        ~HumanA();

        void    attack( void );
};
