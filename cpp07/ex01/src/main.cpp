/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jlaisne <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/02 09:40:02 by jlaisne           #+#    #+#             */
/*   Updated: 2023/10/02 14:02:03 by jlaisne          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/Iter.hpp"

int main( void ) {

    float tab[] = {40.3, 23.4, 42.5};

    Iter(tab, 3, function);
    return 0;
}