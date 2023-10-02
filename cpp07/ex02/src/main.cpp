/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jlaisne <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/02 12:48:27 by jlaisne           #+#    #+#             */
/*   Updated: 2023/10/02 14:12:29 by jlaisne          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
# include <cstdlib>
#include "../includes/Array.hpp"

#define MAX_VAL 10
int main( void )
{
    Array<int> numbers(MAX_VAL);
    int* mirror = new int[MAX_VAL];
    std::srand(time(NULL));
    for (int i = 0; i < MAX_VAL; i++) {
        const int value = std::rand();
        numbers[i] = value;
        mirror[i] = value;
    }
    {
        Array<int> tmp = numbers;
        Array<int> test(tmp);
    }
    {
        Array<int> empty;
        std::cout << empty.size() << std::endl;
        for (int i = 0; i < static_cast<int>(empty.size()); i++) {
            std::cout << empty[i] << std::endl;
        }
    }
    for (int i = 0; i < MAX_VAL; i++) {
        if (mirror[i] != numbers[i])
        {
            std::cerr << "didn't save the same value!!" << std::endl;
            return 1;
        }
        else
            std::cout << numbers[i] << std::endl;
    }
    try {
        numbers[-2] = 0;
    }
    catch(const std::exception& e) {
        std::cerr << e.what() << '\n';
    }
    try {
        numbers[MAX_VAL - 1] = 0;
        std::cout << numbers[MAX_VAL - 1] << std::endl;
    }
    catch(const std::exception& e) {
        std::cerr << e.what() << '\n';
    }

    for (int i = 0; i < MAX_VAL; i++) {
        numbers[i] = std::rand();
    }
    delete [] mirror;
    return 0;
}