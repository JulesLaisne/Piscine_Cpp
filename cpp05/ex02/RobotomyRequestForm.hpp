/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RobotomyRequestForm.hpp                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: juleslaisne <juleslaisne@student.42.fr>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/28 10:56:55 by jlaisne           #+#    #+#             */
/*   Updated: 2023/08/30 14:04:58 by juleslaisne      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ROBOTOMYREQUESTFORM_HPP
# define ROBOTOMYREQUESTFORM_HPP

#include "Form.hpp"

class RobotomyRequestForm : public Form {

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