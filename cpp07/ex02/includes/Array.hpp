/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Array.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jlaisne <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/02 09:49:42 by jlaisne           #+#    #+#             */
/*   Updated: 2023/09/20 15:30:34 by jlaisne          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ARRAY_HPP
# define ARRAY_HPP

#include <iostream>
#include <exception>

template <typename T>
class Array {

    private:
    
        unsigned int _size;
        T *_tab;

    public:

        Array( void ) : _size(0), _tab(NULL) {}
        ~Array( void ) { delete [] _tab; }
        Array ( unsigned int n ) : _size(n), _tab(new T[n]) {}
        Array( Array const & cpy ) : _size(cpy.size()), _tab(new T[cpy.size()]) {

            for (unsigned int i =0; i < cpy.size(); i++)
                _tab[i] = cpy._tab[i];
        }
        Array& operator=( Array const & other ) {
            
            if (this != &other) {
                for (unsigned int i = 0; i < other.size(); i++)
                    _tab[i] = other._tab[i];
            }
            return *this;
        }
        
        class OutOfLowerLimits : public std::exception {
            
            public:
                virtual const char* what() const throw() { return "Out of Lower limits (Index is less than 0)"; }
        };

        class OutOfUpperLimits : public std::exception {
            
            public:
                virtual const char* what() const throw() { return "Out of Upper limits (Index is greater than size)"; }
        };
        
        const T operator[]( unsigned int i ) const {
            
            if (i >= _size)
                throw OutOfLowerLimits();
            return _tab[i];
        }

        T& operator[]( unsigned int i ) {
            
            if (i >= _size)
                throw OutOfUpperLimits();
            return _tab[i];
        }
        unsigned int size( void ) const { return _size; }
};

#endif