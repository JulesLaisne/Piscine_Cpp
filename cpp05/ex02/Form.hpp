/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: juleslaisne <juleslaisne@student.42.fr>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/21 13:22:24 by juleslaisne       #+#    #+#             */
/*   Updated: 2023/07/21 15:07:11 by juleslaisne      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FORM_HPP
# define FORM_HPP

#include "Bureaucrat.hpp"

class Bureaucrat;

class Form {

    private:

        const std::string   _name;
        bool                _signed;
        const int           _gradeToSign;
        const int           _gradeToExe;

    public:
        
        Form(const std::string name, int gradeToSign, int gradeToExe);
        ~Form();

        std::string getName() const;
        bool        getSigned() const;
        int         getGradeToSign() const;
        int         getGradeToExe() const;
    
        Form(const Form& cpy);
        Form& operator=( const Form& other );

        void    beSigned(const Bureaucrat& bureaucrat);

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

    std::ostream& operator<<( std::ostream& o, const Form& form );

#endif