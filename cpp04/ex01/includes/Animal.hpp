/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jlaisne <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/05 13:17:47 by juleslaisne       #+#    #+#             */
/*   Updated: 2023/09/20 10:43:39 by jlaisne          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ANIMAL_HPP
# define ANIMAL_HPP

#include <iostream>

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
        virtual class Brain * getBrain( void ) const;
};


#endif