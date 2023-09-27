/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: juleslaisne <juleslaisne@student.42.fr>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/06 15:08:22 by jlaisne           #+#    #+#             */
/*   Updated: 2023/09/27 21:16:02 by juleslaisne      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/Rpn.hpp"

template <typename T>
void    init( char *arg, T& stack, Rpn &calc ) {
    
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
            stack.push(temp);
        }
        else if ( stack.size() >= 2 ) {
            toCalc = stack.top();
            stack.pop();
            result = calc.calculate(stack.top(), toCalc, word);
            stack.pop();
            stack.push(result);
        }
        else
            throw Rpn::Error();
    }
    if (stack.size() != 1)
        throw Rpn::Error();
    else
        std::cout << stack.top() << std::endl;
        
}

int main( int argc, char **argv ) {

    if (argc != 2)
        return std::cout << "Wrong number of arguments" << std::endl, 1;
    try {
        Rpn                 calc;
        std::stack<int>     stack;
        init(argv[1], stack, calc);
    }
    catch (std::exception &e) {
        std::cout << e.what() << std::endl;
    }
    return 0;
}
