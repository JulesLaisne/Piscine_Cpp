/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jlaisne <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/29 12:53:34 by jlaisne           #+#    #+#             */
/*   Updated: 2023/08/29 13:31:31 by jlaisne          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/AMateria.hpp"

int main ( void ) {

    AMateria Jules("Un type");
    AMateria Jean("qlq");
    AMateria Boo = Jules;

    std::cout << Jules.getType() << std::endl;
    std::cout << Jean.getType() << std::endl;
    std::cout << Boo.getType() << std::endl;

}