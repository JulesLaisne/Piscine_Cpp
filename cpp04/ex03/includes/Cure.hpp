/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cure.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jlaisne <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/29 14:01:23 by jlaisne           #+#    #+#             */
/*   Updated: 2023/08/29 14:03:38 by jlaisne          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CURE_HPP
# define CURE_HPP

#include "AMateria.hpp"

class Cure : public AMateria {

    private:
        /* data */
        
    public:
        Cure();
        ~Cure();
        Cure( const Cure& cpy);
        Cure& operator=( const Cure& other);
};

#endif