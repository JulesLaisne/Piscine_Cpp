/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   easyfind.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jlaisne <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/02 13:13:15 by jlaisne           #+#    #+#             */
/*   Updated: 2023/09/04 08:53:09 by jlaisne          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef EASYFIND_HPP
# define EASYFIND_HPP

#include <algorithm>
#include <array>
#include <list>
#include <exception>
#include <iostream>

class NoMatchFound : public std::exception {

    virtual const char * what() const throw() { return "No Matches found in containers."; }
};

template <typename T >

void    easyfind( T containers, int n ) {
    
    typename T::const_iterator it; // std::list<int>::iterator it; --> typename T::iterator it;

    it = std::find(containers.begin(), containers.end(), n);
    if (it == containers.end())
        throw NoMatchFound();
    else
        std::cout << "Match found in containers." << std::endl;

    // std::find(containers.begin(), containers.end(), n) == std::end(containers) 
    //     ? std::cout << "v does not contain " << n << '\n'
    //     : std::cout << "v contains " << n << '\n';   
}

#endif