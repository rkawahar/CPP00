/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   phonebook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kawaharadaryou <kawaharadaryou@student.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/30 04:32:11 by kawaharadar       #+#    #+#             */
/*   Updated: 2024/11/12 20:57:56 by kawaharadar      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "phonebook.hpp"

PhoneBook::PhoneBook() {
}

PhoneBook::~PhoneBook() {
}

void PhoneBook::add() {
	static int i = 0;
	this->_contacts[i % 8].init(i % 8);
	i++;
}

void printExampleOverView() {
	std::cout << "---------------------------------------------------" << std::endl;
	std::cout << "      index |  last name | first name |   nickname " << std::endl;
	std::cout << "---------------------------------------------------" << std::endl;
}

void PhoneBook::search() {
	bool flg = false;
	std::string i = "";
	int	num = -1;

	std::cout << std::endl;
	printExampleOverView();
	int index = 0;
	while (index < 8)
	{
		this->_contacts[index].printOverView(index);
		index++;
	}
	std::cout << "Which one do you want see?" << std::endl;
	while (!flg){
		std::cout << "Select index: " << std::flush;
		std::getline(std::cin, i);
		if (std::cin.eof()) {
			std::cout << "\nEXIT" << std::endl;
			std::exit(0);
		}
		std::istringstream iss(i);
		if (!(iss >> num)) {
			std::cout << "\nInvalid input error.Try again." << std::endl;
		}
		else if (std::cin.good() && i.size() == 1 && num < 8 && num > -1)
			flg = true;
		else {
			std::cout << "\nInvalid index. Try again." << std::flush;
		}
	}
	std::cout << std::endl;
	this->_contacts[num].printDetails(num);
}

void PhoneBook::usage() {
	std::cout << "*------------------------------*" << std::endl;
	std::cout << "| ADD    : adding a new data   |" << std::endl;
	std::cout << "| SEARCH : searching the data  |" << std::endl;
	std::cout << "| EXIT   : trashing a new data |" << std::endl;
	std::cout << "*------------------------------*" << std::endl;
}