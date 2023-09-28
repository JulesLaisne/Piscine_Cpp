/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jlaisne <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/01 10:11:47 by juleslaisne       #+#    #+#             */
/*   Updated: 2023/09/28 15:36:29 by jlaisne          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/Base.hpp"

Base * generate( void ) {

    int random = std::rand() % 3;
    if (random == 0)
        return (std::cout << "A generated."<< std::endl, new A);
    if (random == 1)
        return (std::cout << "B generated." << std::endl, new B);
    return (std::cout << "C generated." << std::endl, new C);
}

void identify( Base *p ) {

    A *a = dynamic_cast<A *>(p);
    B *b = dynamic_cast<B *>(p);
    C *c = dynamic_cast<C *>(p);
    if (b == NULL && c == NULL)
        std::cout << "A by ptr" << std::endl;
    else if (a == NULL && c == NULL)
        std::cout << "B by ptr" << std::endl;
    else
        std::cout << "C by ptr" << std::endl;
}

void identify( Base &p ) {

    try {
        A &a = dynamic_cast<A &>(p);
        std::cout << "A by ref: " << &a << std::endl;
    }
    catch ( ... ) { }
    try {
        B &b = dynamic_cast<B &>(p);
        std::cout << "B by ref: " << &b << std::endl;
    }
    catch ( ... ) { }
    try {
        C &c = dynamic_cast<C &>(p);
        std::cout << "C by ref: " << &c << std::endl;
    }
    catch ( ... ) { }
}

int main ( void ) {

    Base *base0 = generate();
    identify(base0);
    identify(*base0);
    delete base0;
    Base *base1 = generate();
    identify(base1);
    identify(*base1);
    delete base1;
    Base *base = generate();
    identify(base);
    identify(*base);
    delete base;
    Base *base2 = generate();
    identify(base2);
    identify(*base2);
    delete base2;
    Base *base3 = generate();
    identify(base3);
    identify(*base3);
    delete base3;
    Base *base4 = generate();
    identify(base4);
    identify(*base4);
    delete base4;
    Base *base5 = generate();
    identify(base5);
    identify(*base5);
    delete base5;
    Base *base6 = generate();
    identify(base6);
    identify(*base6);
    delete base6;
    Base *base7 = generate();
    identify(base7);
    identify(*base7);
    delete base7;
    Base *base8 = generate();
    identify(base8);
    identify(*base8);
    delete base8;
    Base *base9 = generate();
    identify(base9);
    identify(*base9);
    delete base9;
}