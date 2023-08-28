/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: juleslaisne <juleslaisne@student.42.fr>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/05 13:17:47 by juleslaisne       #+#    #+#             */
/*   Updated: 2023/07/12 12:42:59 by juleslaisne      ###   ########.fr       */
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
};


#endif