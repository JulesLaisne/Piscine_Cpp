/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Iter.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jlaisne <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/02 09:39:34 by jlaisne           #+#    #+#             */
/*   Updated: 2023/09/02 09:45:30 by jlaisne          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ITER_HPP
# define ITER_HPP

#include <iostream>

template <typename T>

void    function(T tab) {

    std::cout << "element = " << tab << std::endl;
}

template <typename T>

void    Iter(T *tab, int size, void (*f)(T)) {

    for (int i = 0; i < size; i++) {

        f(tab[i]);
    }
    return ;
}

#endif