/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RobotomyRequestForm.hpp                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jlaisne <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/28 10:56:55 by jlaisne           #+#    #+#             */
/*   Updated: 2023/09/26 14:58:12 by jlaisne          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ROBOTOMYREQUESTFORM_HPP
# define ROBOTOMYREQUESTFORM_HPP

#include "AForm.hpp"

class RobotomyRequestForm : public AForm {

    private:

        std::string _target;

    public:

        RobotomyRequestForm( const std::string& target );
        ~RobotomyRequestForm();
        RobotomyRequestForm( const RobotomyRequestForm& cpy );

        RobotomyRequestForm& operator=( const RobotomyRequestForm& other );
        void execute( const Bureaucrat& executor ) const;
};

#endif