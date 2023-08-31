/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: juleslaisne <juleslaisne@student.42.fr>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/29 09:57:13 by jlaisne           #+#    #+#             */
/*   Updated: 2023/07/03 09:12:09 by juleslaisne      ###   ########.fr       */
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
    
        Fixed& operator=(const Fixed& other);

        
};
    std::ostream& operator<<(std::ostream& os, const Fixed& nombre);


#endif