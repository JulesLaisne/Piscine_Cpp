/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   BitcoinExchange.cpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: juleslaisne <juleslaisne@student.42.fr>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/12 18:06:40 by juleslaisne       #+#    #+#             */
/*   Updated: 2023/09/13 21:02:03 by juleslaisne      ###   ########.fr       */
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
        else if (line[11] != '|')
            std::cout << "Invalid separator: " << line[11] << std::endl;
        else if (line[12] != ' ')
            std::cout << "Invalid Format " << std::endl;
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
        return false;
    }
    std::string line;
    std::getline(file, line);
    while (!file.eof()) {

        std::getline(file, line);
        std::tm tm_file = {};
        if (line[10] != ',') {
            std::cerr << "Invalid separator: " << line[10] << std::endl;
            return false;
        }
        std::istringstream ss_file(line.substr(0, 10));
        if (ss_file >> std::get_time(&tm_file, "%Y-%m-%d")) {
            
            if (!isValidDate(ss_file.str())){
                std::cout << "Invalid date: " << ss_file.str() << std::endl;
                return false;
            }
            std::istringstream ss_coef(line.substr(11, line.length()));
            double tmp_coef;
            if (ss_coef >> tmp_coef && tmp_coef <= 2147483647 && tmp_coef >= 0)
                _coefMap.insert(std::pair<std::string, double>(ss_file.str(), tmp_coef));
            else {
                std::cout << "Invalid coef: " << ss_coef.str() << std::endl;
                return  false;
            }
        }
    }
    file.close();
    return true;
}

bool BitcoinExchange::isValidDate(const std::string& dateStr) {

    std::tm tm = {};
    std::istringstream ss(dateStr);

    if (ss >> std::get_time(&tm, "%Y-%m-%d")) {

        _date = ss.str();
        if (tm.tm_mon == 1 && tm.tm_mday <= 29 && tm.tm_year % 4 == 0)
            return true;
        else if (tm.tm_mon == 1 && tm.tm_mday <= 28)
            return true;
        else if (tm.tm_mon == 3 || tm.tm_mon == 5 || tm.tm_mon == 8 || tm.tm_mon == 10) {
            if (tm.tm_mday <= 30)
                return true;
        }
        else if (tm.tm_mon == 0 || tm.tm_mon == 2 || tm.tm_mon == 4 || tm.tm_mon == 6 || tm.tm_mon == 7 || tm.tm_mon == 9 || tm.tm_mon == 11) {
            if (tm.tm_mday <= 31)
                return true;
        }
        else
            return false;
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