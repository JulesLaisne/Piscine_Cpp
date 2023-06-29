/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jlaisne <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/27 14:17:28 by jlaisne           #+#    #+#             */
/*   Updated: 2023/06/29 09:52:35 by jlaisne          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FIXED_HPP
# define FIXED_HPP

#include <iostream>

class Fixed
{
    private:

        int              _num;
        static const int _constNum = 8;
        
    public:

        Fixed( void );
        Fixed( Fixed const & i );
        ~Fixed();
        Fixed& operator=(const Fixed& other);

        int     getRawBits( void ) const;
        void    setRawBits( int const raw );
};


#endif