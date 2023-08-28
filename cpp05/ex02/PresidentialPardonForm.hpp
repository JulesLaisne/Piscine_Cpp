/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PresidentialPardonForm.hpp                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jlaisne <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/27 13:57:07 by juleslaisne       #+#    #+#             */
/*   Updated: 2023/08/28 13:52:13 by jlaisne          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PRESIDENTIALPARDONFORM_HPP
# define PRESIDENTIALPARDONFORM_HPP

#include "Form.hpp"

class PresidentialPardonForm : public Form {

    private:

        std::string _target;

    public:

        PresidentialPardonForm( const std::string& target );
        ~PresidentialPardonForm();
        PresidentialPardonForm( const PresidentialPardonForm& cpy );

        PresidentalPardonForm& operator=( const PresidentialPardonForm& other );
};

#endif