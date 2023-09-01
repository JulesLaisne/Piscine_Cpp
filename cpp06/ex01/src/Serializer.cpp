/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Serializer.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: juleslaisne <juleslaisne@student.42.fr>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/31 14:03:01 by jlaisne           #+#    #+#             */
/*   Updated: 2023/09/01 10:07:03 by juleslaisne      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/Serializer.hpp"

Serializer::Serializer() {
}

Serializer::~Serializer() {
}

Serializer::Serializer(std::string value) {
}

Serializer::Serializer(Serializer const & cpy) {
    
    *this = cpy;
}

Serializer& Serializer::operator=( const Serializer& other ) {

    return *this;
}

uintptr_t Serializer::serialize(Data *ptr) {
    
    uintptr_t serialized = reinterpret_cast<uintptr_t>(ptr);
    return (serialized);
}

Data* Serializer::deserialize(uintptr_t raw) {
    
    Data *deserialized = reinterpret_cast<Data*>(raw);
    return (deserialized);
}