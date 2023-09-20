/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PmergeMe.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jlaisne <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/12 11:19:57 by juleslaisne       #+#    #+#             */
/*   Updated: 2023/09/20 14:05:07 by jlaisne          ###   ########.fr       */
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
    }
    return *this;
}