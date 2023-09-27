/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: juleslaisne <juleslaisne@student.42.fr>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/06 16:03:51 by jlaisne           #+#    #+#             */
/*   Updated: 2023/09/27 21:19:51 by juleslaisne      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/PmergeMe.hpp"

int main ( int argc, char **argv ) {

    if (argc == 1)
        return (std::cout << "Wrong number of arguments" << std::endl, 1);

    std::vector<int> display;
    std::deque<int> que;
    std::list<int> list;

    if (!init_container(display, argv, argc))
        return (std::cout << "Error while initializing container" << std::endl, 1);
    std::cout << "Before: ";
    print_container(display);


    clock_t start_v = clock();
    if (!init_container(que, argv, argc))
        return (std::cout << "Error while initializing container" << std::endl, 1);
    sort(que);
    clock_t stop_v = clock();
    
    clock_t start_d = clock();
    if (!init_container(list, argv, argc))
        return (std::cout << "Error while initializing container" << std::endl, 1);
    sort(list);
    clock_t stop_d = clock();

    double duration_v = (double)(stop_v - start_v) / CLOCKS_PER_SEC;
    double duration_d = (double)(stop_d - start_d) / CLOCKS_PER_SEC;
    
    std::cout << "After: ";
    print_container(list);

    std::cout << "Time to process a range of " << que.size() << " elements with std::deque : " << std::setprecision(8) << duration_v * 1e6 << "us" << std::endl;
    std::cout << "Time to process a range of " << list.size() << " elements with std::list : " << std::setprecision(8) << duration_d * 1e6 << "us" << std::endl;

    return 0;
}