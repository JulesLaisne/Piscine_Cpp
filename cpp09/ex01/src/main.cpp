/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jlaisne <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/06 15:08:22 by jlaisne           #+#    #+#             */
/*   Updated: 2023/09/07 17:36:12 by jlaisne          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/Rpn.hpp"

void    init( char *arg ) {
    
    std::stringstream    str(arg);
    std::string          word;

    while (str >> word) {
        std::cout << word << '\n';
    }
    throw Rpn::Error();
}

int main( int argc, char **argv ) {

    if (argc != 2)
        return std::cout << "Wrong number of arguments" << std::endl, 1;
    try {
        init(argv[1]);
    }
    catch (std::exception &e) {
        e.what();
    }
    return 0;
}
