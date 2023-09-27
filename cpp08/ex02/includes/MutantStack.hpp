/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MutantStack.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jlaisne <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/04 11:36:15 by jlaisne           #+#    #+#             */
/*   Updated: 2023/09/27 10:51:50 by jlaisne          ###   ########.fr       */
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

template <typename T, typename Container = std::deque<T> >

class MutantStack : public std::stack<T, Container>
{
    public:
        MutantStack();
        MutantStack( MutantStack const & src );
        virtual ~MutantStack() {};

        MutantStack<T, Container> & operator=( const MutantStack& other);

        typedef typename std::stack<T, Container>::container_type::iterator iterator;
        iterator begin();
        iterator end();
        iterator rbegin();
        iterator rend();

};

template <typename T, typename Container >
MutantStack<T, Container>::MutantStack() : std::stack<T, Container>() {
}

template <typename T, typename Container>
MutantStack<T, Container>::MutantStack( const MutantStack& cpy ) : std::stack<T, Container>(cpy) {
}

template <typename T, typename Container>
MutantStack<T, Container>& MutantStack<T, Container>::operator=( const MutantStack& other ) {

    this->c = other.c;
    return *this;   
}

template <typename T, typename Container>
typename::MutantStack<T, Container>::iterator MutantStack<T, Container>::begin(){   
    return this->c.begin();
}

template <typename T, typename Container>
typename::MutantStack<T, Container>::iterator MutantStack<T, Container>::end(){
    
    return this->c.end();
}

template <typename T, typename Container>
typename::MutantStack<T, Container>::iterator MutantStack<T, Container>::rbegin(){
    
    return this->c.rbegin();
}

template <typename T, typename Container>
typename::MutantStack<T, Container>::iterator MutantStack<T, Container>::rend(){
    
    return this->c.rend();
}

#endif