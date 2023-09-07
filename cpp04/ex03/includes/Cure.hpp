/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cure.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jlaisne <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/29 14:01:23 by jlaisne           #+#    #+#             */
/*   Updated: 2023/09/05 18:00:04 by jlaisne          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CURE_HPP
# define CURE_HPP

#include "AMateria.hpp"
# include "ICharacter.hpp"

class Cure : public AMateria {
        
    public:
    
        Cure();
        ~Cure();

        Cure& operator=( const Cure& other );
        Cure( const Cure& cpy );

        Cure* clone() const;
        void use( ICharacter& target );
};

#endif