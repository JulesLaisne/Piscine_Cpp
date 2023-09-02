/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   whatever.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jlaisne <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/02 09:33:19 by jlaisne           #+#    #+#             */
/*   Updated: 2023/09/02 09:38:42 by jlaisne          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WHATEVER_HPP
# define WHATEVER_HPP

#include <iostream>

template <typename T>

void swap(T &a, T &b) {

    T temp = a;
    a = b;
    b = temp;
}

template <typename T>

T min(T const &a, T const &b) {

    return (a <= b ? a : b);
}

template <typename T>

T max(T const &a, T const &b) {

    return (a >= b ? a : b);
}

#endif