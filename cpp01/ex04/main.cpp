/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: juleslaisne <juleslaisne@student.42.fr>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/24 13:28:32 by jlaisne           #+#    #+#             */
/*   Updated: 2023/07/25 17:25:38 by juleslaisne      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string>
#include <fstream>
#include <iostream>
#include <cstddef>

std::string replace_line(std::string line, int found, int len_s1, std::string s2) {

    line.erase(found, len_s1);
    line.insert(found, s2);

    return line;
}

int main(int argc, char **argv){

    if (argc == 4) {
        
        std::fstream fin;
        std::string  line;
        std::size_t found;
        std::string  output;
        std::string  s1;
        std::string  s2;

    
        fin.open(argv[1], std::fstream::in);
        if (!fin)
        {
            std::cout << "Error occured when openning " << argv[1] << std::endl;
            return 1;
        }
        output = argv[1];
        output.append(".replace");
        std::ofstream fout(output);
        if (!fout)
        {
            std::cout << "Error occured when creating " << output << std::endl;
            return 1;
        }
        s1 = argv[2];
        s2 = argv[3];
        while (getline(fin, line))
        {
            found = line.rfind(s1);
            while (found != std::string::npos)
            {
                found = line.find(s1);
                if (found != std::string::npos)
                    line = replace_line(line, found, s1.length(), s2);
            }
            fout << line << std::endl;
        }
        fin.close();
    }
    else
        std::cout << "Invalid number of arguments." << std::endl;

    return 0;
}