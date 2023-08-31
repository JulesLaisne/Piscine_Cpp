/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jlaisne <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/31 09:20:52 by jlaisne           #+#    #+#             */
/*   Updated: 2023/08/31 14:02:46 by jlaisne          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/ScalarConverter.hpp"

int main(int argc, char **argv)
{
    
    if (argc != 2)
    {
        std::cout << "Error: Wrong number of arguments" << std::endl;
        return 1;
    }
    ScalarConverter converter(argv[1]);
    return 0;
}