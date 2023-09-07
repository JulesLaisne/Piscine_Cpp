/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Rpn.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jlaisne <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/06 15:09:58 by jlaisne           #+#    #+#             */
/*   Updated: 2023/09/07 17:35:35 by jlaisne          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef RPN_HPP
# define RPN_HPP

# include <iostream>
# include <iostream>
# include <list>
# include <vector>
# include <string>
# include <bits/stdc++.h>
# include <exception>

class Rpn {
    
    public:

        Rpn();
        Rpn( Rpn const & src );
        ~Rpn();

        Rpn & operator=( Rpn const & other );

        class Error : public std::exception {
            
            public:
                virtual const char* what() const throw() { return "Error."; }
        };

    private:

};

#endif