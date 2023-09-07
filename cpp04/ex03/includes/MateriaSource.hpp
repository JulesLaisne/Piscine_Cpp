/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MateriaSource.hpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jlaisne <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/05 15:49:47 by jlaisne           #+#    #+#             */
/*   Updated: 2023/09/05 16:55:00 by jlaisne          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef MATERIASOURCE_HPP
# define MATERIASOURCE_HPP

#include "IMateriaSource.hpp"

class MateriaSource : public IMateriaSource {

    private:

        AMateria*   _created[4];

    public:

        MateriaSource();
        ~MateriaSource();

        MateriaSource( const MateriaSource& cpy );
        MateriaSource& operator=( const MateriaSource& other );
        
        void learnMateria(AMateria * src);
        AMateria* createMateria(std::string const & type);
};

#endif