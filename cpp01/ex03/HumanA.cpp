/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jlaisne <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/23 16:45:42 by jlaisne           #+#    #+#             */
/*   Updated: 2023/05/23 16:59:55 by jlaisne          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanA.hpp"

HumanA::HumanA(std::string name, Weapon Weapon){
    
}

HumanA::~HumanA(){
    
}

void    HumanA::attack( void ){

    std::cout << this->_name << " attacks with their " << this->_Weapon << std::endl;
}