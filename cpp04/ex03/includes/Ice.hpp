/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Ice.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jlaisne <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/29 13:33:37 by jlaisne           #+#    #+#             */
/*   Updated: 2023/08/29 13:56:11 by jlaisne          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ICE_HPP
# define ICE_HPP

#include "AMateria.hpp"

class Ice : public AMateria {
    
    private:
        
    public:
    
        Ice();
        ~Ice();

        Ice& operator=( const Ice& other );
        Ice( const Ice& cpy );

        AMateria* clone() const;
        void use(ICharacter& target);
};

#endif