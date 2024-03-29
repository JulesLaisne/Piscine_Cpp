/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Ice.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jlaisne <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/29 13:33:37 by jlaisne           #+#    #+#             */
/*   Updated: 2023/09/05 18:00:00 by jlaisne          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ICE_HPP
# define ICE_HPP

# include "AMateria.hpp"
# include "ICharacter.hpp"

class Ice : public AMateria {
        
    public:
    
        Ice();
        ~Ice();

        Ice& operator=( const Ice& other );
        Ice( const Ice& cpy );

        Ice* clone() const;
        void use( ICharacter& target );
};

#endif