/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   contact.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kawaharadaryou <kawaharadaryou@student.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/30 04:32:14 by kawaharadar       #+#    #+#             */
/*   Updated: 2024/11/12 20:54:10 by kawaharadar      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CONTACT_HPP
# define CONTACT_HPP

# include <iostream>
# include <iomanip>
# include <sstream>

class Contact {
	private:
		std::string _lastName;
		std::string _firstName;
		std::string _nickName;
		std::string _number;
		std::string _secret;
		int _index;
		std::string _inputData(std::string str);

	public:
		Contact();
		~ Contact();
		void init(int i);
		void printOverView(int i) const;
		void printDetails(int num) const;
};

#endif