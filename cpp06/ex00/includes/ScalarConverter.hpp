/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScalarConverter.hpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jlaisne <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/31 09:30:37 by jlaisne           #+#    #+#             */
/*   Updated: 2023/09/20 09:54:31 by jlaisne          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SCALARCONVERTER_HPP
# define SCALARCONVERTER_HPP

#include <iostream>
#include <string>
#include <cmath>
#include <sstream>

class ScalarConverter {
        
    public:

        ScalarConverter();
        ~ScalarConverter();

        ScalarConverter(ScalarConverter const & src);
        ScalarConverter & operator=(ScalarConverter const & src);
        
        static void convert( std::string value );
        static void    toChar(std::string value);
        static void toInt(std::string value);
        static void toFloat(std::string value);
        static void toDouble(std::string value);
        
};

#endif