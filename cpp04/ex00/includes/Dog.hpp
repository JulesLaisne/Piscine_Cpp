/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jlaisne <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/05 14:02:51 by juleslaisne       #+#    #+#             */
/*   Updated: 2023/09/25 09:57:12 by jlaisne          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef DOG_HPP
# define DOG_HPP

#include "Animal.hpp"

class Dog : public Animal {
    
    private:

    public:

        Dog();
        ~Dog();

        Dog(const Dog& cpy);
        Dog& operator=( const Dog& other );

        void makeSound( void ) const;
};

#endif