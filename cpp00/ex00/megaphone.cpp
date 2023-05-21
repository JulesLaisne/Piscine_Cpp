#include <iostream>
#include <string>
#include <locale>


int main(int argc, char **argv) {

	int		i;
	std::locale loc;
	std::string::size_type index; 

	i = 1;
	if (argc == 1)
		std::cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *" << std::endl;
	else
	{
		while (argv[i])
		{
			std::string str = argv[i];
			index = 0;
			while (index < str.length())
			{
				std::cout << std::toupper(str[index],loc);
				index++;
			}
			i++;
		}
		std::cout << std::endl;
	}
	return 0;
}
