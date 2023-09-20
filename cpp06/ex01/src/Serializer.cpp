/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Serializer.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jlaisne <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/31 14:03:01 by jlaisne           #+#    #+#             */
/*   Updated: 2023/09/20 08:46:59 by jlaisne          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/Serializer.hpp"

Serializer::Serializer() {
}

Serializer::~Serializer() {
}

Serializer::Serializer(Serializer const & cpy) {
    
    *this = cpy;
}

Serializer& Serializer::operator=( const Serializer& other ) {

    if (this != &other) {
        *this = other;
    }
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