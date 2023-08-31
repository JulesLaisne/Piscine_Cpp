/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jlaisne <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/23 14:37:28 by jlaisne           #+#    #+#             */
/*   Updated: 2023/05/23 15:00:01 by jlaisne          ###   ########.fr       */
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
        Zombie();
        ~Zombie();

        void    announce( void );
        void    set_name( const std::string name );
};

Zombie* zombieHorde( int N, std::string name );

#endif