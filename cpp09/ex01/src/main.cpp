/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: juleslaisne <juleslaisne@student.42.fr>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/06 15:08:22 by jlaisne           #+#    #+#             */
/*   Updated: 2023/09/11 15:53:56 by juleslaisne      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/Rpn.hpp"

void    init( char *arg ) {
    
    std::stringstream   str(arg);
    std::string         word;
    Rpn                 calc;
    std::list<int>      lst;
    int                 temp;
    int                 toCalc;
    int                 result;

    while (str >> word) {
    
        if (word.length() != 1)
            throw Rpn::Error();
        if (word[0] > 47 && word[0] < 58 ) {
            temp = std::stoi(word);
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
        init(argv[1]);
    }
    catch (std::exception &e) {
        std::cout << e.what() << std::endl;
    }
    return 0;
}
