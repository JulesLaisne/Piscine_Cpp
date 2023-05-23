/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jlaisne <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/23 16:40:55 by jlaisne           #+#    #+#             */
/*   Updated: 2023/05/23 16:59:14 by jlaisne          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string>
#include <iostream>

class Weapon
{
    private:
        
        std::string _type;
        
    public:
    
        Weapon();
        ~Weapon();

        const std::string& get_name();
        void setType(const std::string type);
};
