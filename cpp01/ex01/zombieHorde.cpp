/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   zombieHorde.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jlaisne <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/23 14:39:17 by jlaisne           #+#    #+#             */
/*   Updated: 2023/05/23 15:01:22 by jlaisne          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie* zombieHorde( int N, std::string name ){
    
    Zombie* zHorde = new Zombie[N];

    for (int i = 0; i < N; i++)
        zHorde[i].set_name(name);
    return zHorde;
}
