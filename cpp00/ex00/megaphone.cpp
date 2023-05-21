#include <iostream>

int main(int argc, char **argv) {

	int		i;

	i = 1;
	if (argc == 1)
		std::cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *" << std::endl;
	else
	{
		while (argv[i])
		{
			std::toupper(argv[i]);
			std::cout << argv[i];
			std::cout << " ";
			i++;
		}
		std::cout << std::endl;
	}
	return 0;
}