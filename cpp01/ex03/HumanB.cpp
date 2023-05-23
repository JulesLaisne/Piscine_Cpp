/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jlaisne <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/23 16:47:16 by jlaisne           #+#    #+#             */
/*   Updated: 2023/05/23 16:58:55 by jlaisne          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanB.hpp"

HumanB::HumanB(/* args */)
{
}

HumanB::~HumanB()
{
}

void    HumanB::attack( void ){

    std::cout << this->_name << " attacks with their " << this->_Weapon << std::endl;
}