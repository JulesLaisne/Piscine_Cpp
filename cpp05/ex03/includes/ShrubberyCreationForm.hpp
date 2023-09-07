/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ShrubberyCreationForm.hpp                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: juleslaisne <juleslaisne@student.42.fr>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/28 10:57:04 by jlaisne           #+#    #+#             */
/*   Updated: 2023/08/30 14:44:41 by juleslaisne      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SHRUBBERYCREATIONFORM_HPP
# define SHRUBBERYCREATIONFORM_HPP

#include "Form.hpp"
#include <fstream>

class ShrubberyCreationForm : public Form {

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