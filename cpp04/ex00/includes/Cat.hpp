/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jlaisne <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/05 14:10:42 by juleslaisne       #+#    #+#             */
/*   Updated: 2023/09/25 09:57:22 by jlaisne          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CAT_HPP
# define CAT_HPP

#include "Animal.hpp"

class Cat : public Animal {

    private:

    public:

        Cat();
        ~Cat();

        Cat(const Cat& cpy);
        Cat& operator=( const Cat& other );

        void makeSound( void ) const;
  
};

#endif