/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Pmergeme.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: juleslaisne <juleslaisne@student.42.fr>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/12 11:19:57 by juleslaisne       #+#    #+#             */
/*   Updated: 2023/09/19 15:14:54 by juleslaisne      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/PmergeMe.hpp"

PmergeMe::PmergeMe( std::vector<int> & vec ) : _vector(vec){
    
    return ;
}

PmergeMe::~PmergeMe(void) { 
    return ;
}

PmergeMe::PmergeMe(PmergeMe const & cpy) {
    
    *this = cpy;
    return ;
}

PmergeMe& PmergeMe::operator=(PmergeMe const & other ) {

    if (this != &other)
    {
        this->_vector = other._vector;
        this->_leftArray = other._leftArray;
        this->_rightArray = other._rightArray;
    }
    return *this;
}