/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: juleslaisne <juleslaisne@student.42.fr>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/29 09:57:13 by jlaisne           #+#    #+#             */
/*   Updated: 2023/07/03 14:18:58 by juleslaisne      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FIXED_HPP
# define FIXED_HPP

#include <iostream>
#include <cmath>

class Fixed
{
    private:

        int        _num;
        static const int    _constNum = 8;
        
    public:

        Fixed( void );
        Fixed( int const num );
        Fixed( float const num );
        Fixed( Fixed const & i );
        ~Fixed();

        int     getRawBits( void ) const;
        void    setRawBits( int const raw );
        float   toFloat( void ) const;
        int     toInt( void ) const;
    
        Fixed&  operator=(const Fixed& other);
        Fixed   operator*(const Fixed& other_l);
        Fixed   operator+(const Fixed& other_l);
        Fixed   operator-(const Fixed& other_l);
        Fixed   operator/(const Fixed& other_l);
        
        bool   operator>(const Fixed& other_l) const;
        bool  operator<(const Fixed& other_l) const;
        bool   operator>=(const Fixed& other_l) const;
        bool   operator<=(const Fixed& other_l) const;
        bool   operator==(const Fixed& other_l) const;
        bool   operator!=(const Fixed& other_l) const;
    
        Fixed&  operator++();
        Fixed   operator++(int num);
        Fixed&  operator--();
        Fixed   operator--(int num);

        static Fixed&  min(Fixed& a, Fixed& b);
        static const Fixed&  min(const Fixed& a, const Fixed& b);
        static Fixed&  max(Fixed& a, Fixed& b);
        static const Fixed&  max(const Fixed& a, const Fixed& b);
};
    
    std::ostream& operator<<(std::ostream& os, const Fixed& nombre);


#endif