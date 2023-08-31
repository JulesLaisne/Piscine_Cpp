/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Ice.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jlaisne <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/29 13:34:25 by jlaisne           #+#    #+#             */
/*   Updated: 2023/08/29 13:55:05 by jlaisne          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/Ice.hpp"

Ice::Ice() {

    this->_type = "ice";
}

Ice::~Ice() {
}

Ice::Ice( const Ice& cpy ) : AMateria(cpy){
    
}

Ice& Ice::operator=( const Ice& other ){

    if (this != &other) {
        this->_type = other._type;
    }
    return *this;
}

AMateria* Ice::clone() const {

    return (new Ice());
}