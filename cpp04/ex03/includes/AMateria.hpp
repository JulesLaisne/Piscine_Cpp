/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AMateria.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jlaisne <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/29 12:54:33 by jlaisne           #+#    #+#             */
/*   Updated: 2023/09/05 17:42:43 by jlaisne          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef AMATERIA_HPP
# define AMATERIA_HPP

# include <string.h>
# include <iostream>
# include "ICharacter.hpp"

class ICharacter;

class AMateria {

    protected:

        std::string _type;

    public:

        AMateria();
        AMateria( std::string const & type );

        AMateria( const AMateria& cpy );
        AMateria& operator=( const AMateria& other  );

        std::string const & getType() const;
        virtual AMateria* clone() const = 0;
        virtual void use( ICharacter& target );
        virtual ~AMateria();

};

#endif