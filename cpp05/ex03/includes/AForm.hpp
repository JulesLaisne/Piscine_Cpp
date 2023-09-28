/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AForm.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jlaisne <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/21 13:22:24 by juleslaisne       #+#    #+#             */
/*   Updated: 2023/09/28 11:30:43 by jlaisne          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef AFORM_HPP
# define AFORM_HPP

#include "Bureaucrat.hpp"

class Bureaucrat;

class AForm {

    private:

        const std::string   _name;
        bool                _signed;
        const int           _gradeToSign;
        const int           _gradeToExe;

    public:
        
        AForm(const std::string name, int gradeToSign, int gradeToExe);
        virtual ~AForm();

        std::string getName() const;
        bool        getSigned() const;
        int         getGradeToSign() const;
        int         getGradeToExe() const;
    
        AForm(const AForm& cpy);
        AForm& operator=( const AForm& other );

        void    beSigned(const Bureaucrat& bureaucrat);
        virtual void    execute(Bureaucrat const & executor) const = 0;

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

    std::ostream& operator<<( std::ostream& o, const AForm& form );

#endif