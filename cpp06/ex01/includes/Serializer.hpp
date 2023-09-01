/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Serializer.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: juleslaisne <juleslaisne@student.42.fr>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/31 13:59:30 by jlaisne           #+#    #+#             */
/*   Updated: 2023/09/01 10:06:36 by juleslaisne      ###   ########.fr       */
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
        Serializer(std::string value);
        Serializer(Serializer const & cpy);
        Serializer & operator=(Serializer const & other);
        
        uintptr_t    serialize(Data *ptr);
        Data*        deserialize(uintptr_t raw);
        
};


#endif