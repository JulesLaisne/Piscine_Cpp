/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jlaisne <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/29 09:57:23 by jlaisne           #+#    #+#             */
/*   Updated: 2023/06/29 10:06:41 by jlaisne          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include "Fixed.hpp"

Fixed::Fixed( void ) {
    
    this->_num = 0;
    this->_constNum = 8;
    std::cout << "Default constructor called" << std::endl;
}

Fixed::Fixed( int const num ) {
    
    this->_num = num;
    this->_constNum = 8;
    std::cout << "Int constructor called" << std::endl;
}

Fixed::Fixed( float const num ) {
    
    this->_constNum = 8;
    this->_num = num / this->_constNum;
    std::cout << "Int constructor called" << std::endl;
}

Fixed::Fixed( Fixed const & i ) {
    
    std::cout << "Copy constructor called" << std::endl;
    this->_num = i._num;
    this->_constNum = 8;
}

Fixed::~Fixed() {
    
    std::cout << "Destructor called" << std::endl;
}

Fixed& Fixed::operator=(const Fixed& other) {
        
        if (this == &other) {
            return *this;
        }
        std::cout << "Copy assignment operator called" << std::endl;
        this->_num = other._num;

        return *this;
}
