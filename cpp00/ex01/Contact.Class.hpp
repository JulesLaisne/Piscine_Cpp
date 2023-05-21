/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.Class.hpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jlaisne <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/21 14:54:32 by jlaisne           #+#    #+#             */
/*   Updated: 2023/05/21 16:55:21 by jlaisne          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CONTACT_CLASS_HPP
# define CONTACT_CLASS_HPP

# include <string>

class Contact {
    
    private :

        std::string _FirstName;
        std::string _LastName;
        std::string _Nickname;
        std::string _PhoneNumber;
        std::string _DarkestSecret;

    public :

        Contact( void );
        ~Contact( void );

        void    set_First_Name(const std::string FirstName);
        void    set_Last_Name(const std::string LastName);
        void    set_Nickname(const std::string Nickname);
        void    set_Phone_Number(const std::string PhoneNumber);
        void    set_Darkest_Secret(const std::string DarkestSecret);

        std::string get_First_Name() const;
        std::string get_Last_Name() const;
        std::string get_Nickname() const;
        std::string get_Phone_Number() const;
        std::string get_Darkest_Secret() const;
        
};

#endif