/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AMateria.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jlaisne <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/29 12:55:20 by jlaisne           #+#    #+#             */
/*   Updated: 2023/08/29 13:55:56 by jlaisne          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/AMateria.hpp"

AMateria::AMateria( void ) {

    return ;
}

AMateria::AMateria(std::string const & type) : _type(type) {
}

AMateria::~AMateria() {
}

AMateria::AMateria ( const AMateria& cpy ) : _type(cpy.getType()) {
}

AMateria& AMateria::operator=( const AMateria& other ){

    if (this != &other) {
        this->_type = other._type;
    }
    return *this;
}

std::string const &  AMateria::getType() const {
    
    return this->_type;    
}
