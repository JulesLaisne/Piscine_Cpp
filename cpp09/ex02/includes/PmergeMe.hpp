/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PmergeMe.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jlaisne <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/06 16:05:13 by jlaisne           #+#    #+#             */
/*   Updated: 2023/09/06 16:06:09 by jlaisne          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PMERGEME_HPP
# define PMERGEME_HPP

# include <iostream>
# include <string>
# include <exception>
# include <algorithm>


template <typename T>

class PmergeMe
{
    public:
        PmergeMe();
        PmergeMe(PmergeMe const & cpy);
        ~PmergeMe();
        PmergeMe & operator=(PmergeMe const & other);
};

#endif