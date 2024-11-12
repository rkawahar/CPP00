/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   contact.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kawaharadaryou <kawaharadaryou@student.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/30 04:32:16 by kawaharadar       #+#    #+#             */
/*   Updated: 2024/11/13 08:08:15 by kawaharadar      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "phonebook.hpp"
#include "contact.hpp"
#include <cstdlib>
#include <cctype>

Contact::Contact() {
}

Contact::~Contact() {
}

std::string Contact::_inputData(std::string str) {
	std::string ans = "";
	bool		flg = false;

	while (flg == false)
	{
		std::cout << str << std::flush;
		std::getline(std::cin, ans);
		if (std::cin.eof())
		{
			std::cout << "\nEXIT" << std::endl;
			std::exit(0);
		}
		else if (std::cin.good() && !ans.empty())
		{
			size_t i = 0;
			while (i < ans.size())
			{
				if (!std::isprint(ans[i]))
				{
					std::cout << "Invalid input. Try again." << std::endl;
					break;
				}
				i++;
			}
			flg = true;
		}
		else 
		{
			std::cin.clear();
			std::cout << "Invalid input. Try again." << std::endl;
		}
	}
	return (ans);
}

void Contact::init(int i) {
	this->_lastName = _inputData("Input your last name: ");
	this->_firstName = _inputData("Input your first name: ");
	this->_nickName = _inputData("Input your nickname: ");
	this->_number = _inputData("Input your phone number: ");
	this->_secret = _inputData("Input your secret: ");
	this->_index = i;
	std::cout << std::endl;
}

void printOverViewPart(std::string str) {
	int len = str.size();
	if (len <= 10) {
		for (int i = 0; i < (11 - len); i++) {
			std::cout << " ";
		}
		std::cout << str << " ";
	}
	else {
		std::cout << " ";
		std::cout << str.substr(0, 9);
		std::cout << ". ";
	}
}

void Contact::printOverView(int i) const {
	std::cout << "          " << i << " |";
	printOverViewPart(this->_lastName);
	std::cout << "|";
	printOverViewPart(this->_firstName);
	std::cout << "|";
	printOverViewPart(this->_nickName);
	std::cout << std::endl;
	std::cout << "---------------------------------------------------" << std::endl;
}

void Contact::printDetails(int num) const {
	std::cout << "-------------------------------------------------" << std::endl;
	std::cout << "Index        : " << num << std::endl;
	std::cout << "Last name    : " << this->_lastName << std::endl;
	std::cout << "First name   : " << this->_firstName << std::endl;
	std::cout << "Nickname     : " << this->_nickName << std::endl;
	std::cout << "Phone number : " << this->_number << std::endl;
	std::cout << "secret       : " << this->_secret << std::endl;
	std::cout << "-------------------------------------------------" << std::endl;
	std::cout << std::endl;
}