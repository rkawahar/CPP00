/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   megaphone.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kawaharadaryou <kawaharadaryou@student.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/29 19:39:12 by kawaharadar       #+#    #+#             */
/*   Updated: 2024/10/29 19:39:13 by kawaharadar      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


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