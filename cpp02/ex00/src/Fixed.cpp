/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jlaisne <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/27 14:17:30 by jlaisne           #+#    #+#             */
/*   Updated: 2023/09/06 16:17:26 by jlaisne          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/Fixed.hpp"

Fixed::Fixed( void ) {
    
    this->_num = 0;
    std::cout << "Default constructor called" << std::endl;
}

Fixed::Fixed( Fixed const & i ) {
    
    std::cout << "Copy constructor called" << std::endl;
    this->_num = i.getRawBits();
}

Fixed::~Fixed() {
    
    std::cout << "Destructor called" << std::endl;
}

Fixed& Fixed::operator=(const Fixed& other) {
        
        if (this == &other) {
            return *this;
        }
        std::cout << "Copy assignment operator called" << std::endl;
        this->_num = other.getRawBits();

        return *this;
}

int    Fixed::getRawBits( void ) const {
    
    std::cout << "getRawBits member function called" << std::endl;
    return (this->_num);
}

void    Fixed::setRawBits( int const raw ) {
    
    this->_num = raw;
    std::cout << "setRawBits member function called" << std::endl;
}