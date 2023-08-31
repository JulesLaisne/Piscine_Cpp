/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Serializer.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jlaisne <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/31 14:03:01 by jlaisne           #+#    #+#             */
/*   Updated: 2023/08/31 14:05:23 by jlaisne          ###   ########.fr       */
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

uniptr_t Serializer::serialize(Data *ptr) {
    
}

Data* Serializer::deserialize(uniptr_t raw) {
    
}