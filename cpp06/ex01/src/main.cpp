/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jlaisne <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/31 13:59:15 by jlaisne           #+#    #+#             */
/*   Updated: 2023/09/20 08:48:14 by jlaisne          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/Serializer.hpp"

int main ( void ) {

    Data *data = new Data;

    data->location = "Lyon";
    data->temperature = 25;
    
    std::cout << "Location: " << data->location << std::endl;
    std::cout << "Temperature: " << data->temperature << std::endl;
    
    std::cout << "================" << std::endl;
    
    uintptr_t serialized = Serializer::serialize(data);
    
    Data *deserialized = Serializer::deserialize(serialized);
    
    std::cout << "Location: " << deserialized->location << std::endl;
    std::cout << "Temperature: " << deserialized->temperature << std::endl;

    delete data;
}