/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PmergeMe.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: juleslaisne <juleslaisne@student.42.fr>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/06 16:05:13 by jlaisne           #+#    #+#             */
/*   Updated: 2023/09/19 15:15:27 by juleslaisne      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PMERGEME_HPP
# define PMERGEME_HPP

# include <iostream>
# include <string>
# include <exception>
# include <algorithm>
# include <array> 
# include <vector>
# include <sstream>

class PmergeMe
{
    private:

        std::vector<int> _vector;
        std::array<int, 2> _leftArray;
        std::array<int, 2> _rightArray;

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