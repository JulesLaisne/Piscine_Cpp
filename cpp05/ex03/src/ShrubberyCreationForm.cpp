/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ShrubberyCreationForm.cpp                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jlaisne <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/28 10:56:59 by jlaisne           #+#    #+#             */
/*   Updated: 2023/09/20 11:01:24 by jlaisne          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/ShrubberyCreationForm.hpp"

ShrubberyCreationForm::ShrubberyCreationForm( const std::string& target ) : Form("Shrubbery Creation Form", 145, 137), _target(target) {
    

}
ShrubberyCreationForm::~ShrubberyCreationForm(){
    
}

ShrubberyCreationForm::ShrubberyCreationForm( const ShrubberyCreationForm& cpy) : Form(cpy), _target(cpy._target) {
    
}

ShrubberyCreationForm& ShrubberyCreationForm::operator=( const ShrubberyCreationForm& other ) {

    if (this != &other) {
        
        _target = other._target;
    }
    return *this;
}

void ShrubberyCreationForm::execute( const Bureaucrat& exec ) const {

    if (this->getSigned() == false)
        throw Form::FormNotSignedException();
    if (exec.getGrade() > this->getGradeToExe())
        throw Form::GradeTooLowException("Bureaucrat needs an higher rank to execute a Shrubbery creation.");
    else {
        std::string output;

        output = _target;
        output.append("_shrubbery");
        std::ofstream fout(output.c_str());                                                                                                                                                                                                  
        for (int i = 0; i < 5; i++) {                                                                                                                                
        fout << "                                        "              << std::endl;
        fout << "                                        "              << std::endl;                   
        fout << "            ++=+==+         "                          << std::endl;
        fout << "      == ++========++++-        "                      << std::endl;
        fout << "     +++++++========+++=          "                    << std::endl;
        fout << "    ++++++++++++=++++==            "                   << std::endl;
        fout << "   +==++==+++++++++++===++            "                << std::endl;
        fout << "   ===========+++========+             "               << std::endl;
        fout << " +============+++========+              "              << std::endl;
        fout << " +===++++++++=+++++++++=+++=             "             << std::endl;
        fout << " ==+++++++==++++++++++++++=               "            << std::endl;
        fout << " +=++*+==========++++=+*+**+:+*++====+     "           << std::endl;
        fout << " ++++++=========++++===++*+===++++====+     "          << std::endl;
        fout << "    ===++=++=++*+++++++*++=====++===++++   "           << std::endl;
        fout << "     ++++*#**#*******#*+++=====++++++*++   "           << std::endl;
        fout << "      ++* +#* .+=       +*+==+++++++++=+   "           << std::endl;
        fout << "   ==+                   ***#*++++==+====    "         << std::endl;
        fout << "  ++=====++                 ##***+========+    "       << std::endl;
        fout << " ++=====+++=+                #***#*+++==++      "      << std::endl;
        fout << " ++====++++=====                 #***++          "     << std::endl;
        fout << " +++++++++++=+++*                                "     << std::endl;
        fout << " +=++====++++#**    * :*                         "     << std::endl;
        fout << " ++=++=====+**##     #*##        =++++==          "    << std::endl;
        fout << " ++====++**-      #*##       +++=======+       "       << std::endl;
        fout << "  +==++ .*        -####      +=+++======       "       << std::endl;
        fout << "                * *##%#   ***+=++++++=+.       "       << std::endl;
        fout << "                  ###%     #*+++=====++=       "       << std::endl;
        fout << "                  .*#%       .*+++=+.          "       << std::endl;
        fout << "                   *#%#                        "       << std::endl;
        fout << "                   ####                        "       << std::endl;
        fout << "                    ##%                        "       << std::endl;
        fout << "                    *##                        "       << std::endl;
        fout << "                    *##                        "       << std::endl;
        fout << "                    ###                        "       << std::endl;
        fout << "                    **#                        "       << std::endl;
        fout << "                    ***#                       "       << std::endl;
        fout << "                    **#*                        "      << std::endl;
        fout << "                                               "       << std::endl;
        fout << "                                                "      << std::endl;
        fout << "                                                "      << std::endl;
        fout << "                                                "      << std::endl;                                                                 
        }
    }
}
