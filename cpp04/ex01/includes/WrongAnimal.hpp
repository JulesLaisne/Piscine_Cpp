/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongAnimal.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: juleslaisne <juleslaisne@student.42.fr>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/05 14:25:58 by juleslaisne       #+#    #+#             */
/*   Updated: 2023/07/06 16:30:21 by juleslaisne      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WRONGANIMAL_HPP
# define WRONGANIMAL_HPP

#include <iostream>

class WrongAnimal {

    protected:

        std::string type;
    
    public:

        WrongAnimal();
        WrongAnimal( std::string type );
        ~WrongAnimal();

        std::string getType( void ) const;
        void    makeSound( void ) const;
};

#endif