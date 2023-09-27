/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PmergeMe.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: juleslaisne <juleslaisne@student.42.fr>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/06 16:05:13 by jlaisne           #+#    #+#             */
/*   Updated: 2023/09/27 17:20:32 by juleslaisne      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PMERGEME_HPP
# define PMERGEME_HPP

# include <iostream>
# include <iomanip>
# include <string>
# include <exception>
# include <algorithm>
# include <vector>
# include <deque>
# include <list>
# include <sstream>
# include <ctime>
# include <climits>
# include <cstring>

class InvalidValueException : public std::exception
{
    public:
        virtual const char* what() const throw();
};

bool isDigitStr( char *str ) {

    for (size_t i = 0; i < strlen(str); i++) {
        if (!isdigit(str[i]))
            return false;
    }
    return true;
}

bool isValidValue( int value, char *argv ) {

    double temp;

    if (value < 0)
        return false;
    if (value == 0 && argv[0] != '0')
        return false;
    temp = atof(argv);
    if (temp > INT_MAX)
        return false;
    if (!isDigitStr(argv))
        return false;
    return true;
}

template <typename T>
bool init_container( T& container, char **argv, int argc ) {

    int value;

    for (int i = 1; i < argc; i++) {
        value = atoi(argv[i]);
        if (!isValidValue(value, argv[i]))
            return false;
        container.push_back(value);
    }
    return true;
}

template <typename T>
void print_container( T& container ) {

    typename T::iterator it;
    typename T::iterator ite = container.end();

    for (it = container.begin(); it != ite; it++) {
        std::cout << *it << ' ';
    }
    std::cout << std::endl;
}

template <typename T>
T advance_it( T it, int target ) {

    for (int i = 0; i < target; i++)
        it++;
    return it;
}

template <typename T>
void    insertionSort(T& arr) {

    typename T::iterator it, it_e, itl, it_j, it_j_1;

    itl =  arr.begin();
    it_e = arr.end();

    for (it = itl; it != it_e; ++it) {

        int temp = *it;
        it_j = it;
        it_j_1 = it_j;
        it_j_1--;
    
        while (it_j != itl && *(it_j_1) > temp) {

            *it_j = *it_j_1;
            it_j--;
            *it_j_1 = *it_j;
            it_j_1--;
        }
        if (temp < *it_j)
            *it_j = temp;
    }
}

template <typename T>
void    merge(T& arr, T& left, T& right) {

    typename T::iterator leftSize = left.end();
    typename T::iterator rightSize = right.end();
    typename T::iterator it = arr.begin(), it_l = left.begin(), it_r = right.begin();

    while (it_l != leftSize && it_r != rightSize) {

        if (*it_l < *it_r) {
            *it = *it_l;
            it++;
            it_l++;
        }
        else {
            *it = *it_r;
            it++;
            it_r++;
        }
    }
    while (it_l != leftSize) {
        *it = *it_l;
        it++;
        it_l++;
    }
    while (it_r != rightSize) {
        *it = *it_r;
        it++;
        it_r++;
    }
}

template <typename T>
void sort( T& arr ) {

    if ( arr.size() >= 64) {

       int middle = arr.size() / 2;

    
        T leftA(arr.begin(), advance_it(arr.begin(), middle));    
        T rightA(advance_it(arr.begin(), middle), arr.end());

        sort(leftA);
        sort(rightA);
        merge(arr, leftA, rightA);

    } 
    else {
        
        insertionSort(arr);
    }
}

#endif