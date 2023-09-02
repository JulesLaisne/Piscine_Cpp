/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   easyfind.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jlaisne <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/02 13:13:15 by jlaisne           #+#    #+#             */
/*   Updated: 2023/09/02 14:06:50 by jlaisne          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef EASYFIND_HPP
# define EASYFIND_HPP

#include <algorithm>
#include <list>
#include <exception>
#include <iostream>

class NoMatchFound : public std::exception {

    virtual const char * what() const throw() { return "No Matches found in containers."; }
};

template <typename T >

void    easyfind( T containers, int n ) {
        
        std::list<int>::const_iterator v;
       // std::list<int>::const_iterator vend = containers.end();

        (std::find(v, containers.end(), n) == std::end(v))
            ? std::cout << "v does not contain " << n << '\n'
            : std::cout << "v contains " << n << '\n';

}

#endif