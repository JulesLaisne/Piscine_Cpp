//* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PresidentialPardonForm.hpp                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: juleslaisne <juleslaisne@student.42.fr>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/27 13:57:07 by juleslaisne       #+#    #+#             */
/*   Updated: 2023/08/30 14:04:55 by juleslaisne      ###   ########.fr       */
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

        PresidentialPardonForm& operator=( const PresidentialPardonForm& other );
        void execute( const Bureaucrat& exec ) const;
};

std::ostream& operator<<( std::ostream& o, const PresidentialPardonForm& form );


#endif