/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ShrubberyCreationForm.hpp                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jlaisne <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/28 10:57:04 by jlaisne           #+#    #+#             */
/*   Updated: 2023/09/26 14:58:09 by jlaisne          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SHRUBBERYCREATIONFORM_HPP
# define SHRUBBERYCREATIONFORM_HPP

#include "AForm.hpp"
#include <fstream>

class ShrubberyCreationForm : public AForm {

    private:

        std::string _target;

    public:

        ShrubberyCreationForm( const std::string& target );
        ~ShrubberyCreationForm();
        ShrubberyCreationForm( const ShrubberyCreationForm& cpy );

        ShrubberyCreationForm& operator=( const ShrubberyCreationForm& other );
        void    execute( const Bureaucrat& executor ) const;
};

#endif