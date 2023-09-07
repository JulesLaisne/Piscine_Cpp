/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Ice.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jlaisne <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/29 13:34:25 by jlaisne           #+#    #+#             */
/*   Updated: 2023/09/05 17:57:53 by jlaisne          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/Ice.hpp"

Ice::Ice() : AMateria() {

    _type = "ice";
}

Ice::~Ice() {
}

Ice::Ice( const Ice& cpy ) : AMateria(cpy) {
    
}

Ice& Ice::operator=( const Ice& other ) {

    if (this != &other) {
        this->_type = other._type;
    }
    return *this;
}

Ice* Ice::clone() const {

    return (new Ice());
}

void    Ice::use( ICharacter& target ) {

    std::cout << "* shoot an ice bolt at " << target.getName() << " *" << std::endl;
}