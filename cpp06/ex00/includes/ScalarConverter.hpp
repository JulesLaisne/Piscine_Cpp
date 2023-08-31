/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScalarConverter.hpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jlaisne <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/31 09:30:37 by jlaisne           #+#    #+#             */
/*   Updated: 2023/08/31 13:42:11 by jlaisne          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SCALARCONVERTER_HPP
# define SCALARCONVERTER_HPP

#include <iostream>
#include <string>
#include <cmath>

class ScalarConverter {
    private:
        
        int     _valueInt;
        float   _valueFloat;
        double  _valueDouble;
        char    _valueChar;
        
    public:

        ScalarConverter();
        ~ScalarConverter();

        ScalarConverter(std::string value);
        ScalarConverter(ScalarConverter const & src);
        ScalarConverter & operator=(ScalarConverter const & src);
        
        char    toChar(std::string value);
        int     toInt(std::string value);
        float   toFloat(std::string value);
        double  toDouble(std::string value);
        
};

#endif