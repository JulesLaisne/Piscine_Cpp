/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Rpn.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: juleslaisne <juleslaisne@student.42.fr>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/11 14:57:54 by juleslaisne       #+#    #+#             */
/*   Updated: 2023/09/27 21:16:45 by juleslaisne      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/Rpn.hpp"

Rpn::Rpn() {}

Rpn::Rpn( Rpn const & src ) {
    *this = src;
}

Rpn::~Rpn() {}

Rpn & Rpn::operator=( Rpn const & other ) {
    if (this != &other) {
        *this = other;
    }
    return *this;
}

int Rpn::multiply( int a, int b ) {
    return a * b;
}

int Rpn::divide( int a, int b ) {
    if (b == 0)
        throw Rpn::Error();
    return a / b;
}

int Rpn::add( int a, int b ) {    
    return a + b;
}

int Rpn::substract( int a, int b ) {
        return a - b;
}

int Rpn::calculate(int a, int b, std::string op) {
    
    typedef int (Rpn::*func)(int, int);

    func members[4] = {&Rpn::multiply, &Rpn::divide, &Rpn::add, &Rpn::substract};
    std::string opBase[4] = {"*", "/", "+", "-"};

    for (int i = 0; i < 4; i++) {
        if (op == opBase[i]) {
            return (this->*members[i])(a, b);
        }
    }
    throw Rpn::Error();
    return 0;
}