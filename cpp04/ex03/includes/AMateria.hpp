/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AMateria.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jlaisne <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/29 12:54:33 by jlaisne           #+#    #+#             */
/*   Updated: 2023/08/29 13:56:28 by jlaisne          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef AMATERIA_HPP
# define AMETRIA_HPP

# include <string.h>
# include <iostream>
# include "ICharacter.hpp"

class AMateria
{
    protected:

        std::string _type;

    public:
        AMateria();
        AMateria( std::string const & type );
        virtual ~AMateria();

        AMateria( const AMateria& cpy );
        AMateria& operator=( const AMateria& other  );

        std::string const & getType() const;
        virtual AMateria* clone() const = 0;
        virtual void use(ICharacter& target);

};

#endif