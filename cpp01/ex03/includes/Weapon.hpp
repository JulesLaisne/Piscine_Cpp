/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jlaisne <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/23 16:40:55 by jlaisne           #+#    #+#             */
/*   Updated: 2023/05/24 10:37:53 by jlaisne          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WEAPON_H
# define WEAPON_H

#include <string>
#include <iostream>

class Weapon
{
    private:
        
        std::string _type;
        
    public:
    
        Weapon(const std::string name);
        ~Weapon();

        const std::string& get_name();
        void setType(const std::string type);
};

#endif