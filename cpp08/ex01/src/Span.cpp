/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Span.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jlaisne <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/04 08:58:24 by jlaisne           #+#    #+#             */
/*   Updated: 2023/09/04 11:34:53 by jlaisne          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/Span.hpp"

Span::Span( unsigned int size ) : N(size) {
    
    this->tab.reserve(N);
}

Span::~Span( void ) {   
}

Span::Span( const Span& cpy ) {
    *this = cpy;
}

Span& Span::operator=( const Span& other ) {
    if (this != &other)
        this->N = other.N;
    return *this;
}

void    Span::addNumber( int add ) {

    if (this->tab.size() < N)
        this->tab.push_back( add );
    else
        throw TabFull();
}

int     Span::longestSpan( void ) {

    if (this->tab.size() < 2)
        throw SpanIrrelevant();
    std::vector<int>::iterator result_max;
    std::vector<int>::iterator result_min;
 
    result_max = std::max_element(this->tab.begin(), this->tab.end());
    result_min = std::min_element(this->tab.begin(), this->tab.end());
    
    return *result_max - *result_min;
}

int     Span::shortestSpan( void ) {

    if (this->tab.size() < 2)
        throw SpanIrrelevant();
    int min = INT_MAX;
    std::sort(this->tab.begin(), this->tab.end());

    std::vector<int>::iterator it;
    std::vector<int>::iterator ite = this->tab.end();
    for (it = this->tab.begin(); it != ite; it++) {
        if (it + 1 != ite && *(it + 1) - *it < min)
            min = *(it + 1) - *it;
    }
    return min;
}

void    Span::addMultipleNumber( std::vector<int>::iterator begin, std::vector<int>::iterator end ) {

    if (this->tab.size() + std::distance(begin, end) > N)
        throw TabFull();
    this->tab.insert(this->tab.end(), begin, end);
}
