/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MutantStack.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jlaisne <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/04 11:36:15 by jlaisne           #+#    #+#             */
/*   Updated: 2023/09/28 11:55:15 by jlaisne          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef MUTANTSTACK_HPP
# define MUTANTSTACK_HPP

# include <iostream>
# include <stack>
# include <deque>
# include <algorithm>
# include <iterator>
# include <list>
# include <vector>

template <typename T, typename Container = std::deque<T> >

class MutantStack : public std::stack<T, Container>
{
    public:

        MutantStack() {}
        MutantStack( MutantStack const & cpy ): std::stack<T, Container>(cpy) {}
        virtual ~MutantStack() {}

        MutantStack<T> & operator=( const MutantStack& other) { if (this != &other) this->c = other.c; return *this; }

        typedef typename Container::iterator iterator;
        iterator begin() { return this->c.begin(); };
        iterator end() { return this->c.end(); };
        iterator rbegin() { return this->c.rbegin(); };
        iterator rend() {    return this->c.rend(); };

};

#endif