/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: juleslaisne <juleslaisne@student.42.fr>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/05 14:10:42 by juleslaisne       #+#    #+#             */
/*   Updated: 2023/07/15 16:09:30 by juleslaisne      ###   ########.fr       */
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

        void makeSound( void ) const;
  
};

#endif