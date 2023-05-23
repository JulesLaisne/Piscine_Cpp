/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jlaisne <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/23 11:31:04 by jlaisne           #+#    #+#             */
/*   Updated: 2023/05/23 14:09:38 by jlaisne          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

void randomChump( std::string name );
Zombie* newZombie( std::string name );

int main(void)
{
    Zombie* NewZ;

    NewZ = newZombie("Popo");
    randomChump("Soso");
    NewZ->announce();

    delete NewZ;
    return (0);
}