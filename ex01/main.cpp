/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kawaharadaryou <kawaharadaryou@student.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/30 08:39:27 by kawaharadar       #+#    #+#             */
/*   Updated: 2024/10/30 09:51:33 by kawaharadar      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "phonebook.hpp"

int main() {
	PhoneBook book;
	std::string str = "";

	std::cout << "Create your phonebook." << std::endl;
	std::cout << std::endl;
	book.usage();
	std::cout << std::endl;
	while (1) {
		std::cout << "> ";
		std::getline(std::cin, str);
		if (std::cin.eof()) {
			std::cout << "EXIT" << std::endl;
			break;
		}
		else if (str == "ADD")
			book.add();
		else if (str == "SEARCH")
			book.search();
		else if (str == "EXIT")
			break;
		else {
			std::cout << "Invalid input. Try again." << std::endl;
		}
	}
	return (0);
}