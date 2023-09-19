/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: juleslaisne <juleslaisne@student.42.fr>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/06 16:03:51 by jlaisne           #+#    #+#             */
/*   Updated: 2023/09/19 16:38:09 by juleslaisne      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/PmergeMe.hpp"

bool isValidValue( int value ) {

    if (value < 0)
        return false;
    return true;
}

bool isDigitString( std::string str ) {

    for (int i = 0; i < str.length(); i++) {
        
        if (str[i] < '0' || str[i] > '9')
            return false;
    }
    return true;
}

std::vector<int> init_array( std::string argv ) {

    std::vector<int> vector;
    std::stringstream ss(argv);
    int value;

    while (ss >> value && isDigitString(std::to_string(value))) {
        if (!isValidValue(value))
            throw std::invalid_argument("Invalid value");
        vector.push_back(value);
    }
    if (!ss.eof())
        throw std::invalid_argument("Invalid value");
    return vector;
}

int main ( int argc, char **argv ) {

    try {
        if (argc == 1)
            throw std::invalid_argument("No argument");
        std::string str;

        for (int i = 1; i < argc; i++) {
            str += argv[i];
            str += " ";
        }
        std::vector<int> vector = init_array(str);
        PmergeMe sort(vector);
    }
    catch (std::exception & e) {
        std::cout << e.what() << std::endl;
    }
    return 0;
}