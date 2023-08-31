/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Serializer.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jlaisne <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/31 13:59:30 by jlaisne           #+#    #+#             */
/*   Updated: 2023/08/31 14:05:32 by jlaisne          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SERIALIZER_HPP
# define SERIALIZER_HPP

# include <iostream>
# include <string>

class Serializer
{
    public:
        Serializer();
        ~Serializer();
        Serializer(std::string value);
        Serializer(Serializer const & cpy);
        Serializer & operator=(Serializer const & other);
        
        uniptr_t    serialize(Data *ptr);
        Data*       deserialize(uniptr_t raw);
        
    private:
        
        
};

#endif