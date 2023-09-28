/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jlaisne <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/04 11:35:53 by jlaisne           #+#    #+#             */
/*   Updated: 2023/09/28 11:01:15 by jlaisne          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/MutantStack.hpp"

int main()
{
    std::cout << "---------------------" << std::endl;
    std::cout << "Mutant Stack" << std::endl;
    MutantStack<int> mstack;
    mstack.push(5);
    mstack.push(17);
    std::cout << "Top element" << std::endl;
    std::cout << mstack.top() << std::endl;
    mstack.pop();
    std::cout << "Size stack" << std::endl;
    std::cout << mstack.size() << std::endl;
    mstack.push(3);
    mstack.push(5);
    mstack.push(737);
    mstack.push(0);
    MutantStack<int>::iterator it = mstack.begin();
    MutantStack<int>::iterator ite = mstack.end();
    ++it;
    --it;
    std::cout << "stack iteration" << std::endl;
    while (it != ite)
    {
        std::cout << *it << std::endl;
        ++it;
    }
    std::stack<int> s(mstack);
    
    std::cout << "---------------------" << std::endl;
    std::cout << "---------------------" << std::endl;

    std::cout << "Mutant Stack List" << std::endl;
    MutantStack<int, std::list<int> > mstackL;
    mstackL.push(5);
    mstackL.push(17);
    std::cout << "Top element" << std::endl;
    std::cout << mstackL.top() << std::endl;
    mstackL.pop();
    std::cout << "Size stack" << std::endl;
    std::cout << mstackL.size() << std::endl;
    mstackL.push(3);
    mstackL.push(5);
    mstackL.push(737);
    mstackL.push(0);
    MutantStack<int, std::list<int> >::iterator itL = mstackL.begin();
    MutantStack<int, std::list<int> >::iterator iteL = mstackL.end();
    ++itL;
    --itL;
    std::cout << "stack iteration" << std::endl;
    while (itL != iteL)
    {
        std::cout << *itL << std::endl;
        ++itL;
    }
    std::stack<int, std::list<int> > sL(mstackL);

    std::cout << "---------------------" << std::endl;
    std::cout << "---------------------" << std::endl;

    std::cout << "Lists" << std::endl;
    
    std::list<int> lst;
    lst.push_back(5);
    lst.push_back(17);
    std::cout << "Front element" << std::endl;
    std::cout << lst.back() << std::endl;
    lst.pop_back();
    std::cout << "Size list" << std::endl;
    std::cout << lst.size() << std::endl;
    lst.push_back(3);
    lst.push_back(5);
    lst.push_back(737);
    lst.push_back(0);
    std::list<int>::iterator it1 = lst.begin();
    std::list<int>::iterator ite1 = lst.end();
    ++it1;
    --it1;
    std::cout << "list iteration" << std::endl;
    while (it1 != ite1)
    {
        std::cout << *it1 << std::endl;
        ++it1;
    }
    std::list<int> s1(lst);
    
    return 0;
}