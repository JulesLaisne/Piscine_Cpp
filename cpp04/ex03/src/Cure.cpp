/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cure.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jlaisne <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/05 14:45:55 by jlaisne           #+#    #+#             */
/*   Updated: 2023/09/05 17:57:36 by jlaisne          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/Cure.hpp"

Cure::Cure() : AMateria() {

    _type = "cure";
}

Cure::~Cure() {
}

Cure::Cure( const Cure& cpy ) : AMateria(cpy) {
    
}

Cure& Cure::operator=( const Cure& other ) {

    if (this != &other) {
        this->_type = other._type;
    }
    return *this;
}

Cure* Cure::clone() const {

    return (new Cure());
}

void    Cure::use( ICharacter& target ) {

    std::cout << "* heals " << target.getName() << "'s wounds *" << std::endl;
}