/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jlaisne <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/05 13:17:47 by juleslaisne       #+#    #+#             */
/*   Updated: 2023/08/31 09:43:08 by jlaisne          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ANIMAL_HPP
# define ANIMAL_HPP

#include <iostream>
#include "Brain.hpp"

class Animal {

    protected:

        std::string type;
        
    public:

        Animal();
        Animal( std::string type );
        virtual ~Animal();

        Animal( const Animal& cpy );
        Animal& operator=( const Animal& other );


        std::string getType( void ) const;
        virtual void makeSound( void ) const;

        virtual Brain * getBrain( void ) const;

};


#endif