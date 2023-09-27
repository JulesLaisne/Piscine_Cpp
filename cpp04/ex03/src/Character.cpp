/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Character.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jlaisne <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/29 13:53:33 by jlaisne           #+#    #+#             */
/*   Updated: 2023/09/26 14:12:58 by jlaisne          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/Character.hpp"

Character::Character( std::string const & name ) : _name(name) {
        
    for (int i = 0; i < 4; i++)
        _inventory[i] = NULL;
    for (int i = 0; i < 4; i++)
        _dumped[i] = NULL;
    return ;
}

Character::~Character() {
    
    for (int i = 0; i < 4; i++) {
        if (_inventory[i] != NULL)
            delete _inventory[i];
        if (_dumped[i] != NULL)
            delete _dumped[i];
    }
    return ;
}

Character::Character( const Character& cpy ) {

    for (int i = 0; i < 4; i++){
            if (_inventory[i])
                _inventory[i] = cpy._inventory[i]->clone();
            else
                _inventory[i] = NULL;
        }
    _name = cpy._name;
    return ;
}

Character& Character::operator=( const Character &other ) {

    if (this != &other) {
        
        for (int i = 0; i < 4; i++){
            delete _inventory[i];
            if (other._inventory[i])
                _inventory[i] = other._inventory[i]->clone();
            else
                _inventory[i] = NULL;
        }  
    }
    _name = other._name;
    return *this ;
}

std::string const & Character::getName() const {

    return _name;
}

void Character::equip( AMateria* m ) {

    int i = 0;
    if (m == NULL)
        return ;
    while (i < 4) {
        if (_dumped[i] == NULL)
            break;
        if (_dumped[i] == m)
            return ;
        i++;
    }
    if (i == 4) {
        for (int i = 0; i < 4; i++) {
            delete _dumped[i];
            _dumped[i] = NULL;
        }
    }
    for (int i = 0; i < 4; i++) {
        if (_inventory[i] == m)
            return ;
        if (_inventory[i] == NULL) {
            _inventory[i] = m;
            return;
        }
    }
    if (i != 4)
        _dumped[i] = m;
    else
        _dumped[0] = m;
    return ;
}

void Character::unequip( int idx ) {

    int i = 0;
    if (idx < 0 || idx > 3)
        return ;
    while (i < 4) {
        if (_dumped[i] == NULL)
            break;
        i++;
    }
    if (i == 4) {
        for (int i = 0; i < 4; i++) {
            delete _dumped[i];
            _dumped[i] = NULL;
        }
    }
    for (int i = 0; i < 4; i++) {
        if (_dumped[i] == NULL) {
            _dumped[i] = _inventory[idx];
            _inventory[idx] = NULL;
            return ;
        }
    }
}

void Character::use(int idx, ICharacter& target) {

    if (idx < 0 || idx > 3)
        return ;
    if (_inventory[idx]) {
        _inventory[idx]->use(target);
    }
    delete _inventory[idx];
    _inventory[idx] = NULL;
    for (int i = 0; i < 4; i++) {
        if (_dumped[i] != NULL) {
            delete _dumped[i];
            _dumped[i] = NULL;
        }
    }
}
