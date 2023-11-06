/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jlaisne <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/02 13:13:04 by jlaisne           #+#    #+#             */
/*   Updated: 2023/11/06 15:19:08 by jlaisne          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/easyfind.hpp"

int main ( void ) {

    try {
        std::list<int> lst1;

        lst1.push_back(39);
        lst1.push_back(41);
        lst1.push_back(42);
        lst1.push_back(43);
        lst1.push_back(44);
        lst1.push_back(45);
        lst1.push_back(46);
        
        easyfind(lst1, 39);
        easyfind(lst1, 45);
        easyfind(lst1, 25);
    }
    catch (std::exception &e) {
        std::cout << e.what() << std::endl;
    }
}