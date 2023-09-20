/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jlaisne <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/10 16:27:50 by juleslaisne       #+#    #+#             */
/*   Updated: 2023/09/20 10:19:49 by jlaisne          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BRAIN_HPP
# define BRAIN_HPP

#include <iostream>
#include <string>

class Brain {

    private:

        std::string ideas[100];
        
    public:

        Brain();
        ~Brain();

        Brain& operator=( const Brain& other );
        Brain( const Brain& cpy );

        void printIdeas( void ) const;

};

#endif