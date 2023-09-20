/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   BitcoinExchange.cpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jlaisne <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/12 18:06:40 by juleslaisne       #+#    #+#             */
/*   Updated: 2023/09/20 14:34:28 by jlaisne          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/BitcoinExchange.hpp"

BitcoinExchange::BitcoinExchange() {}

BitcoinExchange::~BitcoinExchange() {}

BitcoinExchange::BitcoinExchange(BitcoinExchange const & src) {
    *this = src;
}

BitcoinExchange & BitcoinExchange::operator=(BitcoinExchange const & rhs) {
    if (this != &rhs) {
        
    }
    return *this;
}

void    BitcoinExchange::run( std::fstream & file ) {

    if (!getDataBase())   
        return ;
    std::string line;
    std::getline(file, line);
    while ( !file.eof() ) {

        std::getline(file, line);
        if (line.empty())
           std::cout << "Empty line" << std::endl;
        else if (!isValidDate(line.substr(0, 10)))
            std::cout << "Invalid date: " << line.substr(0, 10) << std::endl;
        else if (line[10] != ' ')
            std::cout << "-> Invalid Format " << std::endl;
        else if (line[11] != '|')
            std::cout << "Invalid separator: " << line[11] << std::endl;
        else if (line[12] != ' ')
            std::cout << "-- Invalid Format " << std::endl;
        else if (!isValidValue(line.substr(13, line.length())))
            std::cout << "Invalid Value: " << line.substr(13, line.length()) << std::endl;
        else {
            _coef = getCoef(_date);
            if (_coef == -1)
                std::cout << "Invalid coef" << std::endl;
            else
                std::cout << line.substr(0,10) << " => " << _price << " = " << _price * _coef << std::endl;
        }
    }
}

bool BitcoinExchange::getDataBase( void ) {

    std::fstream file("data.csv");
    if (!file.is_open()) {
        std::cout << "File couldn't be opened" << std::endl;
        return (file.close(), false);
    }
    std::string line;
    std::getline(file, line);
    while (!file.eof()) {

        std::getline(file, line);
        if (line[10] != ',') {
            std::cerr << "Invalid separator: " << line[10] << std::endl;
            return (file.close(), false);
        }
        if (isValidDate(line.substr(0, 10))) {
            
            std::istringstream ss_coef(line.substr(11, line.length()));
            double tmp_coef;
            if (ss_coef >> tmp_coef && tmp_coef <= 2147483647 && tmp_coef >= 0)
                _coefMap.insert(std::pair<std::string, double>(_date, tmp_coef));
            else {
                std::cout << "Invalid coef: " << ss_coef.str() << std::endl;
                return  (file.close(), false);
            }
        }
        else {
            std::cout << "Invalid date: " << line.substr(0,10) << std::endl;
            return (file.close(), false);
        }
    }
    file.close();
    return true;
}

bool BitcoinExchange::isValidDate(const std::string& dateStr) {

    if (dateStr.length() != 10)
        return false;
    if (dateStr[4] != '-' || dateStr[7] != '-')
        return false;

    int year, mon, mday;
    
    year = static_cast<int>(std::atoi(dateStr.substr(0, 4).c_str()));
    if (year < 1000 || year > 2023)
        return false;
    mon = static_cast<int>(std::atoi(dateStr.substr(5, 2).c_str()));
    if (mon < 0 || mon > 12)
        return false;
    mday = static_cast<int>(std::atoi(dateStr.substr(8, 2).c_str()));
    if (mday < 0 || mday > 31)
        return false;

    if (mon == 2 && mday <= 29 && year % 4 == 0)
        return (_date = dateStr, true);
    else if (mon == 2 && mday <= 28)
        return (_date = dateStr, true);
    else if (mon == 4 || mon == 6 || mon == 9 || mon == 11) {
        if (mday <= 30)
            return (_date = dateStr, true);
    }
    else if (mon == 1 || mon == 3 || mon == 5 || mon == 7 || mon == 8 || mon == 10 || mon == 12) {
        if (mday <= 31)
            return (_date = dateStr, true);
    }
   return false;
}

bool BitcoinExchange::isValidValue( const std::string & valueStr ) {

    std::istringstream ss(valueStr);
    float value;

    if (ss >> value) {
        _price = value;
        if (value > 10000 || value < 0)
            return false;
        return true;
    }
    return false;
}

float BitcoinExchange::getCoef( const std::string & dateStr ) {

    std::map<std::string, double>::iterator it = _coefMap.find(dateStr);
    if (it != _coefMap.end())
        return it->second;
    else {
        it = _coefMap.lower_bound(dateStr);
        it--;
        return it->second;
    }
    return 0;
}