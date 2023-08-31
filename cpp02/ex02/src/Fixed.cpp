/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jlaisne <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/29 09:57:23 by jlaisne           #+#    #+#             */
/*   Updated: 2023/08/28 16:44:31 by jlaisne          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/Fixed.hpp"

Fixed::Fixed( void ) {
    
    _num = 0;
    std::cout << "Default constructor called" << std::endl;
}

Fixed::Fixed( int const num ) {
    
    _num = num << _constNum;
    std::cout << "Int constructor called" << std::endl;
}

Fixed::Fixed( float const num ) {

    _num = std::roundf(num * (1 << _constNum));
    std::cout << "Float constructor called" << std::endl;
}

Fixed::Fixed( Fixed const & i ) {
    
    std::cout << "Copy constructor called" << std::endl;
    _num = i.getRawBits();
}

Fixed::~Fixed() {
    
    std::cout << "Destructor called" << std::endl;
}

int    Fixed::getRawBits( void ) const {
    
    return (this->_num);
}

void    Fixed::setRawBits( int const raw ) {
    
    this->_num = raw;
}

int    Fixed::toInt( void ) const {

    return (this->_num >> _constNum);
}

float    Fixed::toFloat( void ) const {

    return static_cast<float>(this->getRawBits()) / (1 << _constNum);
}

std::ostream& operator<<(std::ostream& os, const Fixed& num) {

    return os << num.toFloat();
}

Fixed&  Fixed::operator++() {

    this->setRawBits(this->getRawBits() + 1);
    return *this;
}

Fixed   Fixed::operator++(int num) {

    Fixed   temp(*this);
    this->setRawBits(this->getRawBits() + 1);
    return temp;
}

Fixed&  Fixed::operator--() {

    this->setRawBits(this->getRawBits() - 1);
    return *this;
}

Fixed   Fixed::operator--(int num) {

    Fixed   temp(*this);
    this->setRawBits(this->getRawBits() - 1);
    return temp;
}

Fixed& Fixed::operator=(const Fixed& other) {
        
        if (this == &other) {
            return *this;
        }
        std::cout << "Copy assignment operator called" << std::endl;
        _num = other._num;
        return *this;
}

Fixed  Fixed::operator*(const Fixed& other_l) {
        
        std::cout << "Copy assignment operator called" << std::endl;
        _num = (_num * other_l._num) / (1 << _constNum);
        return *this;
}

Fixed  Fixed::operator+(const Fixed& other_l) {
        
        std::cout << "Copy assignment operator called" << std::endl;
        _num = (_num + other_l._num) / (1 << _constNum);
        return *this;
}

Fixed  Fixed::operator-(const Fixed& other_l) {
        
        std::cout << "Copy assignment operator called" << std::endl;
        _num = (_num - other_l._num) / (1 << _constNum);
        return *this;
}

Fixed  Fixed::operator/(const Fixed& other_l) {
        
        std::cout << "Copy assignment operator called" << std::endl;
        _num = (_num / other_l._num) / (1 << _constNum);
        return *this;
}

bool  Fixed::operator<(const Fixed& other_l) const {
        
        std::cout << "Copy assignment operator called" << std::endl;
        return (this->getRawBits() < other_l.getRawBits());
}

bool  Fixed::operator<=(const Fixed& other_l) const {
        
        std::cout << "Copy assignment operator called" << std::endl;
        return (this->getRawBits() <= other_l.getRawBits());
}

bool  Fixed::operator>(const Fixed& other_l) const {
        
        std::cout << "Copy assignment operator called" << std::endl;
        return (this->getRawBits() > other_l.getRawBits());
}

bool  Fixed::operator>=(const Fixed& other_l) const {
        
        std::cout << "Copy assignment operator called" << std::endl;
        return (this->getRawBits() >= other_l.getRawBits());
}

bool    Fixed::operator!=(const Fixed& other_l) const {
        
        std::cout << "Copy assignment operator called" << std::endl;
        return (this->getRawBits() != other_l.getRawBits());
}

bool Fixed::operator==(const Fixed& other_l) const {
        
        std::cout << "Copy assignment operator called" << std::endl;
        return (this->getRawBits() == other_l.getRawBits());
}

Fixed& Fixed::min(Fixed& a, Fixed& b) {
    
    if (a < b)
        return a;
    else
        return b;
}

const Fixed& Fixed::min(const Fixed& a, const Fixed& b) {
    
    if (a < b)
            return a;
        else
            return b;
}

Fixed& Fixed::max(Fixed& a, Fixed& b) {
    
    if (a > b)
        return a;
    else
        return b;
}

const Fixed& Fixed::max(const Fixed& a, const Fixed& b) {
    
    if (a > b)
        return a;
    else
        return b;
}
