/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScalarConverter.cpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jlaisne <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/31 09:31:23 by jlaisne           #+#    #+#             */
/*   Updated: 2023/08/31 13:50:14 by jlaisne          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/ScalarConverter.hpp"

ScalarConverter::ScalarConverter() : _valueInt(0), _valueFloat(0), _valueDouble(0), _valueChar(0) {
}

ScalarConverter::~ScalarConverter() {
}

ScalarConverter::ScalarConverter(std::string value) {

    this->toChar(value);
    this->toInt(value);
    this->toFloat(value);
    this->toDouble(value);
}

ScalarConverter::ScalarConverter(ScalarConverter const & src) {

    *this = src;
}

ScalarConverter & ScalarConverter::operator=(ScalarConverter const & src) {

    if (this != &src)
    {
        this->_valueInt = src._valueInt;
        this->_valueFloat = src._valueFloat;
        this->_valueDouble = src._valueDouble;
        this->_valueChar = src._valueChar;
    }
    return *this;
}

char    ScalarConverter::toChar(std::string value) {

    try {
        
        if (value.length() == 1 && !isdigit(value[0]))
            this->_valueChar = value[0];
        else
            this->_valueChar = static_cast<char>(std::stoi(value));
        std::cout << "char: ";
        if (this->_valueChar < 32 || this->_valueChar > 126)
            std::cout << "Non displayable" << std::endl;
        else
            std::cout << "'" << this->_valueChar << "'" << std::endl;
    }
    catch (std::exception & e) {

        std::cout << "char: impossible" << std::endl;
    }
    return this->_valueChar;
}

int     ScalarConverter::toInt(std::string value) {
    
    try {
        
        if ((this->_valueChar >= 0 && this->_valueChar < 128) && value.length() == 1)
            this->_valueInt = static_cast<int>(this->_valueChar);
        else
            this->_valueInt = std::stoi(value);
        std::cout << "int: " << this->_valueInt << std::endl;
    }
    catch (std::exception & e) {

        std::cout << "int: impossible" << std::endl;
    }
    return this->_valueInt;
}

float   ScalarConverter::toFloat(std::string value) {

    try {
        
        if ((this->_valueChar >= 0 && this->_valueChar < 128) && value.length() == 1)
            this->_valueFloat = static_cast<float>(this->_valueChar);
        else
            this->_valueFloat = std::stof(value);
        if (std::isnan(this->_valueFloat) == NAN)
            this->_valueFloat = nan("nanf");
        else if (std::isnan(this->_valueDouble) == INFINITY)
            this->_valueFloat = nan("+inff");
        else if (std::isnan(this->_valueDouble) == -INFINITY)
            this->_valueFloat = std::nan("-inff");
        else {
            std::cout << "float: " << this->_valueFloat;
            if (this->_valueFloat - static_cast<int>(this->_valueFloat) == 0)
                std::cout << ".0";
            std::cout << "f" << std::endl;
        }
    }
    catch (std::exception & e) {

        std::cout << "float: impossible" << std::endl;
    }
    return this->_valueFloat;
}

double  ScalarConverter::toDouble(std::string value) {
    
    try {

        if ((this->_valueChar >= 0 && this->_valueChar < 128) && value.length() == 1)
            this->_valueDouble = static_cast<double>(this->_valueChar);
        else
            this->_valueDouble = std::stod(value);
        if (std::isnan(this->_valueDouble)== NAN)
            this->_valueDouble = nan("nan");
        else if (std::isnan(this->_valueDouble) == INFINITY)
            this->_valueDouble = nan("+inf");
        else if (std::isnan(this->_valueDouble) == (-INFINITY))
            this->_valueDouble = nan("-inf");
        else {
            std::cout << "double: " << this->_valueDouble;
            if (this->_valueDouble - static_cast<int>(this->_valueDouble) == 0)
                std::cout << ".0";
            std::cout << std::endl;
        }
    }
    catch (std::exception & e) {

        std::cout << "double: impossible" << std::endl;
    }
    return this->_valueDouble;
}