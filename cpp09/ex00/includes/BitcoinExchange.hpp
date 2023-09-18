/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   BitcoinExchange.hpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: juleslaisne <juleslaisne@student.42.fr>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/04 14:40:18 by jlaisne           #+#    #+#             */
/*   Updated: 2023/09/13 21:12:06 by juleslaisne      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BITCOIN_EXCHANGE_HPP
# define BITCOIN_EXCHANGE_HPP

# include <iostream>
# include <string>
# include <iomanip>
# include <fstream>
# include <sstream>
# include <ctime>
# include <map>

class BitcoinExchange {

    private:
        
        std::string                      _date;
        double                           _coef;
        double                           _price;
        std::map<std::string, double>    _coefMap;
        
    public:

        BitcoinExchange();
        ~BitcoinExchange();
        BitcoinExchange(BitcoinExchange const & src);
        BitcoinExchange & operator=(BitcoinExchange const & rhs);

        void run( std::fstream & file );
        bool isValidDate( const std::string& dateStr );
        bool isValidValue( const std::string& valueStr );
        float getCoef( const std::string& dateStr );
        bool getDataBase( void );
};

#endif