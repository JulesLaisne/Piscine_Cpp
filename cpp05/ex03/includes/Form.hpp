/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jlaisne <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/21 13:22:24 by juleslaisne       #+#    #+#             */
/*   Updated: 2023/08/31 09:10:22 by jlaisne          ###   ########.fr       */
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
        virtual void    execute(Bureaucrat const & executor) const;

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

        class FormNotSignedException : public std::exception {
            
            public:
                virtual const char* what() const throw() { return "Form is not signed by accredited Bureaucrat"; }
        };
        
        class FormNotExecutable: public std::exception {
            
            public:
                virtual const char* what() const throw() { return "Form is not executable by Bureaucrat"; }
        };
    
};

    std::ostream& operator<<( std::ostream& o, const Form& form );

#endif