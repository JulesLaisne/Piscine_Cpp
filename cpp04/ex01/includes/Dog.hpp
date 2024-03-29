/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jlaisne <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/05 14:02:51 by juleslaisne       #+#    #+#             */
/*   Updated: 2023/09/20 10:43:01 by jlaisne          ###   ########.fr       */
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
        Dog& operator=( const Dog& other );
        Dog ( const Dog& cpy );

        void makeSound( void ) const;
        Brain * getBrain( void ) const;
};

#endif