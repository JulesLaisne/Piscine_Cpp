/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PmergeMe.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jlaisne <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/06 16:05:13 by jlaisne           #+#    #+#             */
/*   Updated: 2023/09/20 15:32:15 by jlaisne          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PMERGEME_HPP
# define PMERGEME_HPP

# include <iostream>
# include <string>
# include <exception>
# include <algorithm>
# include <vector>
# include <sstream>

class PmergeMe
{
    private:

        std::vector<int> _vector;

    public:
        PmergeMe( std::vector<int> & vector) ;
        PmergeMe( PmergeMe const & cpy );
        ~PmergeMe();
        PmergeMe & operator=(PmergeMe const & other);
};

class InvalidValueException : public std::exception
{
    public:
        virtual const char* what() const throw();
};

#endif