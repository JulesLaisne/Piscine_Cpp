/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScalarConverter.cpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jlaisne <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/31 09:31:23 by jlaisne           #+#    #+#             */
/*   Updated: 2023/09/20 14:04:18 by jlaisne          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/ScalarConverter.hpp"

ScalarConverter::ScalarConverter() {
}

ScalarConverter::~ScalarConverter() {
}

ScalarConverter::ScalarConverter(ScalarConverter const & src) {

    *this = src;
}

ScalarConverter & ScalarConverter::operator=(ScalarConverter const & src) {

    if (this != &src)
    {
        *this = src;
    }
    return *this;
}

void    ScalarConverter::convert( std::string value ) {

    toChar(value);
    toInt(value);
    toFloat(value);
    toDouble(value);
}


bool isFloat( std::string myString ) {
    
    std::istringstream iss(myString);
    float f;
    iss >> std::noskipws >> f;
    return iss.eof() && !iss.fail(); 
}

bool isDouble( std::string myString ) {
    
    std::istringstream iss(myString);
    double f;
    iss >> std::noskipws >> f;
    return iss.eof() && !iss.fail(); 
}

void    ScalarConverter::toChar(std::string value) {

    char    _valueChar;
    char    *ptr;

    if (value.length() == 1 && !isdigit(value[0]))
        std::cout << "char: " << "'" << value << "'" << std::endl;
    else {
        _valueChar = static_cast<char>(strtod(value.c_str(), &ptr));
        if (_valueChar >= 32 && _valueChar <=126)
            std::cout << "char: " << "'" << _valueChar << "'" << std::endl;
        else if ((_valueChar >= 0 && _valueChar < 32) || (_valueChar > 126 && _valueChar <= 127))
            std::cout << "char: Non displayable" << std::endl;
        else
            std::cout << "char: impossible" << std::endl;
    }
}

void     ScalarConverter::toInt(std::string value) {
    
    int     _valueInt;
    std::stringstream   ss(value);
    
    if (value.length() == 1 && !isdigit(value[0])) {
        _valueInt = static_cast<int>(value.c_str()[0]);
        std::cout << "int: " << _valueInt << std::endl;
    }
    else if (ss >> _valueInt && ss.eof()) {
        _valueInt = static_cast<int>(atoi(value.c_str()));
        std::cout << "int: " << _valueInt << std::endl;
    }
    else if (isFloat(value.substr(0, value.length() - 1)) && value.at(value.size() - 1) == 'f') {
        _valueInt = static_cast<int>(atof(value.c_str()));
        if (_valueInt < 2147483647 && _valueInt > -2147483648)
            std::cout << "int: " << _valueInt << std::endl;
        else
            std::cout << "int: impossible" << std::endl;
    }
    else if (isFloat(value)) {
        _valueInt = static_cast<int>(atof(value.c_str()));
        if (_valueInt < 2147483647 && _valueInt > -2147483648)
            std::cout << "int: " << _valueInt << std::endl;
        else
            std::cout << "int: impossible" << std::endl;
    }
    else
        std::cout << "int: impossible" << std::endl;
}

void   ScalarConverter::toFloat(std::string value) {

    float _valueFloat;
    std::stringstream   ss(value);

    if (value.length() == 1 && !isdigit(value[0])) {
        _valueFloat = static_cast<float>(value.c_str()[0]);
        std::cout << "float: " << _valueFloat;
        std::cout << ".0";
        std::cout << "f" << std::endl;
    }
    else {
        if (isFloat(value.substr(0, value.length() - 1)) && value.at(value.size() - 1) == 'f') {
            _valueFloat = static_cast<float>(atof(value.c_str()));
            if (_valueFloat > std::numeric_limits<float>::min() && _valueFloat < std::numeric_limits<float>::max()) {
                std::cout << "float: " << _valueFloat;
                if (_valueFloat - static_cast<int>(_valueFloat) == 0)
                std::cout << ".0";
                std::cout << "f" << std::endl;
            }
            else
                std::cout << "float: impossible" << std::endl;
        }
        else if (isDouble(value)) {
            _valueFloat = static_cast<float>(atof(value.c_str()));
            if (_valueFloat > std::numeric_limits<float>::min() && _valueFloat < std::numeric_limits<float>::max()) {
            std::cout << "float: " << _valueFloat;
            if (_valueFloat - static_cast<int>(_valueFloat) == 0)
            std::cout << ".0";
            std::cout << "f" << std::endl;
            }
            else
                std::cout << "float: impossible" << std::endl;
        }
        else {
            if (ss.str() == "nan" || ss.str() == "nanf")
                std::cout << "float  : " << nan("nanf") << "f" << std::endl;
            else if (ss.str() == "+inf" || ss.str() == "+inff")
                std::cout << "float: " << "+inf" << "f" << std::endl;
            else if (ss.str() == "-inf" || ss.str() == "-inff")
                std::cout << "float: " << "-inf" << "f" << std::endl;
            else
                std::cout << "float: impossible" << std::endl;
        }
    }
}

void  ScalarConverter::toDouble(std::string value) {
    
    double _valueDouble;
    std::stringstream   ss(value);
    char    *ptr;

    if (value.length() == 1 && !isdigit(value[0])) {
        _valueDouble = static_cast<double>(value.c_str()[0]);
        std::cout << "double: " << _valueDouble;
        std::cout << ".0";
    }
    else {
        if (isDouble(value)) {
            _valueDouble = static_cast<double>(strtod(value.c_str(), &ptr));
            std::cout << "double: " << _valueDouble;
            if (_valueDouble - static_cast<int>(_valueDouble) == 0)
                std::cout << ".0" << std::endl;
        }
        else if (isDouble(value.substr(0, value.length() - 1)) && value.at(value.size() - 1) == 'f') {
            _valueDouble = static_cast<double>(strtod(value.c_str(), &ptr));
                std::cout << "double: " << _valueDouble;
                if (_valueDouble - static_cast<int>(_valueDouble) == 0)
                    std::cout << ".0" << std::endl;
            }
        else {
            if (ss.str() == "nan" || ss.str() == "nanf")
                std::cout << "double: " << nan("nan") << std::endl;
            else if (ss.str() == "+inf" || ss.str() == "+inff")
                std::cout << "double: " << "+inf" << std::endl;
            else if (ss.str() == "-inf" || ss.str() == "-inff")
                std::cout << "double: " << "-inf" << std::endl;
            else
                std::cout << "double: impossible" << std::endl;
        }
    }
}
