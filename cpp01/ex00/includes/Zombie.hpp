/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jlaisne <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/23 11:31:49 by jlaisne           #+#    #+#             */
/*   Updated: 2023/05/23 14:01:17 by jlaisne          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ZOMBIE_CPP
# define ZOMBIE_CPP

#include <string>
#include <iostream>

class Zombie{

    private:
        
        std::string _name;

    public:
        Zombie(std::string name);
        ~Zombie();

        void    announce( void );
};

#endif