/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: juleslaisne <juleslaisne@student.42.fr>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/04 14:04:38 by juleslaisne       #+#    #+#             */
/*   Updated: 2023/09/18 15:20:49 by juleslaisne      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/ScavTrap.hpp"

int main() {

    ScavTrap Jules( "Jules" );
    ScavTrap test( Jules );

    Jules.attack( "himself" );
    Jules.takeDamage( 10 );
    Jules.beRepaired( 10 );
    for (int i = 0; i < 4; i++)
        Jules.guardGate();
}