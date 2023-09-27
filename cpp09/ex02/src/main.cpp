/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: juleslaisne <juleslaisne@student.42.fr>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/06 16:03:51 by jlaisne           #+#    #+#             */
/*   Updated: 2023/09/27 13:50:28 by juleslaisne      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/PmergeMe.hpp"

int main ( int argc, char **argv ) {

    if (argc == 1)
        return (std::cout << "Wrong number of arguments" << std::endl, 1);

    std::vector<int> arr;
    std::deque<int> queu;

    clock_t init_v = clock();
    if (!init_container(arr, argv, argc))
        return (std::cout << "Error while initializing container" << std::endl, 1);
    std::cout << "Before: ";
    print_container(arr);
    clock_t init_s = clock();
    
    double duration_init = (double)(init_s - init_v) / CLOCKS_PER_SEC;

    clock_t start_v = clock();
    sort(arr);
    clock_t stop_v = clock();
    
    clock_t start_d = clock();
    if (!init_container(queu, argv, argc))
        return (std::cout << "Error while initializing container" << std::endl, 1);
    sort(queu);
    clock_t stop_d = clock();

    double duration_v = (double)(stop_v - start_v) / CLOCKS_PER_SEC;
    double duration_d = (double)(stop_d - start_d) / CLOCKS_PER_SEC;
    
    duration_v += duration_init;
    std::cout << "After: ";
    print_container(arr);

    std::cout << "Time to process a range of " << arr.size() << " elements with std::vector : " << std::setprecision(8) << duration_v << "us" << std::endl;
    std::cout << "Time to process a range of " << queu.size() << " elements with std::deque : " << std::setprecision(8) << duration_d << "us" << std::endl;

    return 0;

    return 0;
}