/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Serializer.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jlaisne <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/31 13:59:30 by jlaisne           #+#    #+#             */
/*   Updated: 2023/09/20 08:45:32 by jlaisne          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SERIALIZER_HPP
# define SERIALIZER_HPP

# include <iostream>
# include <string>
# include <stdint.h>

struct Data {

    std::string location;
    int         temperature;
};

class Serializer
{
    public:
        Serializer();
        ~Serializer();
        Serializer(Serializer const & cpy);
        Serializer & operator=(Serializer const & other);
        
        static uintptr_t    serialize(Data *ptr);
        static Data*        deserialize(uintptr_t raw);
        
};


#endif