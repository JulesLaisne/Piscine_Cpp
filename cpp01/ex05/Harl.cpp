/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jlaisne <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/24 16:36:35 by jlaisne           #+#    #+#             */
/*   Updated: 2023/06/27 14:08:19 by jlaisne          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"

Harl::Harl(){
    
}

Harl::~Harl(){
    
}

typedef void(Harl::* func_member) ( void );

void    Harl::debug( void ){

    std::cout << "I love having extra bacon for my 7XL-double-cheese-triple-pickle-special-ketchup burger. I really do !" << std::endl;
}

void    Harl::info( void ){

    std::cout << "I cannot believe adding extra bacon costs more money. You didn`t put enough bacon in my burger ! If you did, I wouldn`t be asking for more !" << std::endl;
}

void    Harl::warning( void ){

    std::cout << "I think I deserve to have some extra bacon for free. I`ve been coming for years whereas you started working here since last month." << std::endl;
}

void    Harl::error( void ){

    std::cout << "This is unacceptable ! I want to speak to the manager now." << std::endl;
}

void Harl::complain( std::string level ){

        std::string  names[4] = {
            "DEBUG",
            "INFO",
            "WARNING",
            "ERROR"
        };

        func_member  member[4] = {
                &Harl::debug,
                &Harl::info,
                &Harl::warning,
                &Harl::error
        };
        if (level.empty())
        {
            std::cout << "Detail your complaint." << std::endl;
            return ;
        }
        for (size_t i = 0; i < 4; i++)
        {
            if (!names[i].compare(level))
            {
                (this->*member[i])();
                return ;
            }
        }
        std::cout << "I cannot hear your complaint." << std::endl;
}