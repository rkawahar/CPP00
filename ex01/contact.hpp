/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   contact.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kawaharadaryou <kawaharadaryou@student.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/30 04:32:14 by kawaharadar       #+#    #+#             */
/*   Updated: 2024/10/30 09:49:56 by kawaharadar      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CONTACT_HPP
# define CONTACT_HPP

# include <iostream>
# include <iomanip>
# include <sstream>

class Contact {
	private: std::string _lastName;
	private: std::string _firstName;
	private: std::string _nickName;
	private: std::string _number;
	private: std::string _secret;
	private: int _index;
	private: std::string _inputData(std::string str);

	public: Contact();
	public: ~ Contact();
	public: void init(int i);
	public: void printOverView(int i) const;
	public: void printDetails(int num) const;
};

#endif