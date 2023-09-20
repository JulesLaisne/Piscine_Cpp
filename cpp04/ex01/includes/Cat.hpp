/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jlaisne <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/05 14:10:42 by juleslaisne       #+#    #+#             */
/*   Updated: 2023/09/20 10:42:53 by jlaisne          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CAT_HPP
# define CAT_HPP

#include "Animal.hpp"
#include "Brain.hpp"

class Cat : public Animal {

    private:

        Brain* brain;

    public:

        Cat();
        ~Cat();

        Cat( const Cat& cpy );
        Cat& operator=( const Cat& other );

        Brain * getBrain( void ) const;
        void makeSound( void ) const;
  
};

#endif