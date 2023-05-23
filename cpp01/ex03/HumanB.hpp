/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jlaisne <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/23 16:47:19 by jlaisne           #+#    #+#             */
/*   Updated: 2023/05/23 16:57:29 by jlaisne          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Weapon.hpp"

class HumanB
{
    private:
    
    std::string _name;
    Weapon      _Weapon;
    
    public:
    
        HumanB(/* args */);
        ~HumanB();

        void    attack( void );
};
