/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   easyfind.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jlaisne <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/02 13:13:15 by jlaisne           #+#    #+#             */
/*   Updated: 2023/11/06 15:18:32 by jlaisne          ###   ########.fr       */
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
    
    typename T::const_iterator it;

    it = std::find(containers.begin(), containers.end(), n);
    if (it == containers.end()) {
        throw NoMatchFound();
    }
    else
        std::cout << "Match found in containers." << std::endl; 
}

#endif