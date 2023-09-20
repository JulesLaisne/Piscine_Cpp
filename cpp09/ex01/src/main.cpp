/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jlaisne <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/06 15:08:22 by jlaisne           #+#    #+#             */
/*   Updated: 2023/09/20 14:06:14 by jlaisne          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/Rpn.hpp"

void    init( char *arg, std::list<int> &lst, Rpn &calc ) {
    
    std::stringstream   str(arg);
    std::string         word;
    int                 temp;
    int                 toCalc;
    int                 result;

    while (str >> word) {
    
        if (word.length() != 1)
            throw Rpn::Error();
        if (word[0] > 47 && word[0] < 58 ) {
            temp = std::atoi(word.c_str());
            lst.push_back(temp);
        }
        else if ( lst.size() >= 2 ) {
            toCalc = lst.back();
            lst.pop_back();
            result = calc.calculate(lst.back(), toCalc, word);
            lst.pop_back();
            lst.push_back(result);
        }
        else
            throw Rpn::Error();
    }
    if (lst.size() != 1)
        throw Rpn::Error();
    else
        std::cout << lst.back() << std::endl;
        
}

int main( int argc, char **argv ) {

    if (argc != 2)
        return std::cout << "Wrong number of arguments" << std::endl, 1;
    try {
        Rpn                 calc;
        std::list<int>      lst;
        init(argv[1], lst, calc);
    }
    catch (std::exception &e) {
        std::cout << e.what() << std::endl;
    }
    return 0;
}
