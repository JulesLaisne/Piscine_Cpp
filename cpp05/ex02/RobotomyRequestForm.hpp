/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RobotomyRequestForm.hpp                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jlaisne <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/28 10:56:55 by jlaisne           #+#    #+#             */
/*   Updated: 2023/08/28 13:52:12 by jlaisne          ###   ########.fr       */
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
};

#endif