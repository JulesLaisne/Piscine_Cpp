/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: juleslaisne <juleslaisne@student.42.fr>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/31 13:59:15 by jlaisne           #+#    #+#             */
/*   Updated: 2023/09/01 10:10:40 by juleslaisne      ###   ########.fr       */
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

    Serializer serializer;
    uintptr_t serialized = serializer.serialize(data);
    Data *deserialized = serializer.deserialize(serialized);
    
    std::cout << "Location: " << deserialized->location << std::endl;
    std::cout << "Temperature: " << deserialized->temperature << std::endl;

    delete data;
}