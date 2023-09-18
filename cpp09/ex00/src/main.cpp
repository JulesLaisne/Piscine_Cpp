/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: juleslaisne <juleslaisne@student.42.fr>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/04 14:40:00 by jlaisne           #+#    #+#             */
/*   Updated: 2023/09/13 20:40:51 by juleslaisne      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/BitcoinExchange.hpp"

int main ( int argc, char **argv ) {

    BitcoinExchange exchange;
    
    if ( argc != 2 ) {
        std::cout << "Wrong number of arguments" << std::endl;
        return 1;
    }
    std::fstream file(argv[1]);
    if (file.is_open()) {
        exchange.run( file );
        file.close();
        return 0;
    }
    else {
        std::cout << "File couldn't be opened" << std::endl;
        return 1;
    }
    return 0;
}
