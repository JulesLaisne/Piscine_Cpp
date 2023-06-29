/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jlaisne <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/29 09:57:13 by jlaisne           #+#    #+#             */
/*   Updated: 2023/06/29 10:04:37 by jlaisne          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FIXED_HPP
# define FIXED_HPP

#include <iostream>

class Fixed
{
    private:

        int const        _num;
        static const int _constNum;
        
    public:

        Fixed( void );
        Fixed( int const num );
        Fixed( float const num );
        Fixed( Fixed const & i );
        ~Fixed();
        Fixed& operator=(const Fixed& other);

        
};


#endif