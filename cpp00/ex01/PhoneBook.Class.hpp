/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.Class.hpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jlaisne <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/21 14:43:31 by jlaisne           #+#    #+#             */
/*   Updated: 2023/05/23 11:20:36 by jlaisne          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PHONEBOOK_CLASS_HPP
# define PHONEBOOK_CLASS_HPP

#include "Contact.Class.hpp"

class PhoneBook {

    private :
    
        Contact     _PhoneBook[9];
        int         max_index;

    public :
    
        PhoneBook( void );
        ~PhoneBook( void );

        void    set_contact(Contact& NewContact);
        void    set_index(int index);
        
        void    display_Contacts(void);
};

#endif