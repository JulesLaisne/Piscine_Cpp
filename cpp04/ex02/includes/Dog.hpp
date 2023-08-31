/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jlaisne <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/05 14:02:51 by juleslaisne       #+#    #+#             */
/*   Updated: 2023/08/31 09:44:06 by jlaisne          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef DOG_HPP
# define DOG_HPP

#include "Animal.hpp"
#include "Brain.hpp"

class Dog : public Animal {
    
    private:

        Brain* brain;
        
    public:

        Dog();
        ~Dog();

        void makeSound( void ) const;
        Brain * getBrain( void ) const;

        Dog& operator=( const Dog& other );
        Dog ( const Dog& cpy );
};

#endif