/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jlaisne <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/23 14:36:33 by jlaisne           #+#    #+#             */
/*   Updated: 2023/05/23 15:00:34 by jlaisne          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

int main(void)
{
    Zombie*     Horde1;
    Zombie*     Horde2;

    Horde1 = zombieHorde(5, "HORDEALPHA");
    for (int i = 0; i < 5; i++)
        Horde1[i].announce();
    std::cout << std::endl;
    Horde2 = zombieHorde(1, "HORDEOMEGA");
    for (int i = 0; i < 1; i++)
        Horde2[i].announce();

    delete [] Horde1;
    delete [] Horde2;
}