/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jlaisne <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/02 13:13:04 by jlaisne           #+#    #+#             */
/*   Updated: 2023/09/02 13:51:26 by jlaisne          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/easyfind.hpp"

int main ( void ) {

    std::list<int> lst1;

    lst1.push_back(40);
    lst1.push_back(41);
    lst1.push_back(42);
    lst1.push_back(43);
    lst1.push_back(44);
    lst1.push_back(45);
    lst1.push_back(46);
    
    easyfind(lst1, 40);
}