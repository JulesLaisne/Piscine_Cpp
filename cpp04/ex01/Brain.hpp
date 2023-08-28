/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: juleslaisne <juleslaisne@student.42.fr>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/10 16:27:50 by juleslaisne       #+#    #+#             */
/*   Updated: 2023/07/15 15:45:56 by juleslaisne      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BRAIN_HPP
# define BRAIN_HPP

#include <iostream>

class Brain {

    private:

        std::string ideas[100];
        
    public:

        Brain();
        ~Brain();

        Brain& operator=( const Brain& other );
        Brain( const Brain& cpy );

};

#endif