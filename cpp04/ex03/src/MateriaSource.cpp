/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MateriaSource.cpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jlaisne <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/05 15:54:27 by jlaisne           #+#    #+#             */
/*   Updated: 2023/09/06 09:23:13 by jlaisne          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/MateriaSource.hpp"

MateriaSource::MateriaSource() {
    
    for (int i = 0; i < 4; i++) {
            _created[i] = NULL;
    }
    return ;
}

MateriaSource::~MateriaSource() {

    for (int i = 0; i < 4; i++) {
        if (_created[i] != NULL)
            delete _created[i];
    }
}

MateriaSource::MateriaSource( const MateriaSource& cpy ) {

    if (this != &cpy) {
        for (int i = 0; i < 4; i++){
            if (_created[i])
                _created[i] = cpy._created[i]->clone();
            else
                _created[i] = NULL;
        }  
    }
    return ;
}

MateriaSource& MateriaSource::operator=( const MateriaSource& other ) {

    if (this != &other) {
        for (int i = 0; i < 4; i++){
            if (_created[i])
                delete _created[i];
            if (other._created[i])
                _created[i] = other._created[i]->clone();
            else
                _created[i] = NULL;
        }
    }
    return *this;
}

void    MateriaSource::learnMateria(AMateria *src) {

    for (int i = 0; i < 4; i++) {

        if (_created[i] == NULL) {
            _created[i] = src;
            return ;
        }
    }
    return ;
}

AMateria* MateriaSource::createMateria( std::string const & type ){

    for (int i = 0; i < 4; i++) {
        if (_created[i] && _created[i]->getType() == type)
        {
            return _created[i]->clone();
        }
    }
    return NULL;
}