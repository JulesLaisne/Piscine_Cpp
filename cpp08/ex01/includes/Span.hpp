/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Span.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jlaisne <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/04 08:57:49 by jlaisne           #+#    #+#             */
/*   Updated: 2023/09/04 11:33:55 by jlaisne          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SPAN_HPP
# define SPAN_HPP

# include <iostream>
# include <vector>
# include <algorithm>
# include <exception>
# include <climits>

class Span {

    private:

        unsigned int N;
        std::vector<int> tab;
        Span( void );

    public:

        Span( unsigned int size );
        ~Span( void );
        Span( const Span& cpy );
        Span& operator=( const Span& other );

        void    addNumber( int add );
        int     shortestSpan();
        int     longestSpan();
        void    addMultipleNumber( std::vector<int>::iterator begin, std::vector<int>::iterator end );

        class TabFull : public std::exception {
            
            public:
                virtual const char * what() const throw() { return "Tab is full already!";};
        };
        
        class SpanIrrelevant : public std::exception {
            
            public:
                virtual const char * what() const throw() { return "Tab is not filled enough to find relevant spans.";};
        };
};

#endif