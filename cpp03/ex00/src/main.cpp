/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: juleslaisne <juleslaisne@student.42.fr>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/04 14:04:38 by juleslaisne       #+#    #+#             */
/*   Updated: 2023/09/18 14:55:07 by juleslaisne      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/ClapTrap.hpp"

int main() {

    ClapTrap Jules("Jules");
    Jules.attack(" himself");
    Jules.attack(" himself again");
    
    ClapTrap JulesNew(Jules);
    
    JulesNew.attack(" himself 1 ");
    JulesNew.attack(" himself 2 ");
    JulesNew.attack(" himself 3 ");
    JulesNew.attack(" himself 4 ");
    JulesNew.attack(" himself 5 ");
    JulesNew.attack(" himself 6 ");
    JulesNew.attack(" himself 7 ");
    JulesNew.attack(" himself 8 ");
    JulesNew.attack(" himself 9 ");
}