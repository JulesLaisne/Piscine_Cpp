/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jlaisne <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/24 16:36:14 by jlaisne           #+#    #+#             */
/*   Updated: 2023/05/24 16:43:36 by jlaisne          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HARL_HPP
# define HARL_HPP

#include <string>
#include <iostream>

class Harl
{
    private:
        
    public:
    
        Harl();
        ~Harl();

        void    debug( void );
        void    info( void );
        void    warning( void );
        void    error( void );

        void complain( std::string level );
};

#endif