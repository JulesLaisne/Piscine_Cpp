/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Rpn.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: juleslaisne <juleslaisne@student.42.fr>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/06 15:09:58 by jlaisne           #+#    #+#             */
/*   Updated: 2023/09/27 21:12:52 by juleslaisne      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef RPN_HPP
# define RPN_HPP

# include <iostream>
# include <sstream>
# include <stack>
# include <vector>
# include <string>
# include <exception>
# include <cstdlib>

class Rpn {
    
    public:

        Rpn();
        Rpn( Rpn const & src );
        ~Rpn();

        Rpn & operator=( Rpn const & other );

        int     calculate( int a, int b, std::string op );
    
        int     multiply( int a, int b );
        int     divide( int a, int b );
        int     add( int a, int b );
        int     substract( int a, int b );

        class Error : public std::exception {
            
            public:
                virtual const char* what() const throw() { return "Error."; }
        };

    private:

};

#endif