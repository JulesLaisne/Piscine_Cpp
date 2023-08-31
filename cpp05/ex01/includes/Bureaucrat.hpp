/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: juleslaisne <juleslaisne@student.42.fr>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/20 16:50:00 by juleslaisne       #+#    #+#             */
/*   Updated: 2023/07/21 15:09:21 by juleslaisne      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BUREAUCRAT_HPP
# define BUREAUCRAT_HPP

#include <iostream>
#include <string>
#include <exception>
#include "Form.hpp"

class Form;

class Bureaucrat {

    private:

        const std::string   _name;
        int                 _grade;

    public:

        Bureaucrat( const std::string name, int grade );
        ~Bureaucrat();
        
        Bureaucrat( const Bureaucrat& cpy );
        Bureaucrat& operator=( const Bureaucrat& other );


        std::string getName() const;
        int         getGrade() const;
        
        void    PromoteGrade();
        void    DemoteGrade();

        void        signForm( Form& form );

        class GradeTooLowException : public std::exception {

            private:
                const char* _error; 
            
            public:
                GradeTooLowException( const char *error ) : _error(error) {
                }
                
                virtual const char* what() const throw() {
                    return _error;
                }
        };

        class GradeTooHighException : public std::exception {
            
            private:
                const char* _error; 
            
            public:
                GradeTooHighException( const char *error ) : _error(error) {
                }
                
                virtual const char* what() const throw() {
                    return _error;
                }
                
        };
    
};

    std::ostream& operator<<(std::ostream& os, const Bureaucrat& bureaucrat);

#endif