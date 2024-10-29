#include <iostream>
#include <string>

int	main(int argc, char **argv)
{
	size_t	i;

	if (argc == 1)
	{
		std::cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *" << std::endl;
		return (0); 
	}
	i = 0;
	while (argv[++i])
	{
		std::string str = std::string(argv[i]);
		std::string::iterator it = str.begin();
		while (it != str.end())
		{
			if (islower(*it))
				*it = std::toupper(*it);
			std::cout << *it;
			it++;
		}
	}
	std::cout << std::endl;
}