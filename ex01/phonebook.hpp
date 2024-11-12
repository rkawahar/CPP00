/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   phonebook.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kawaharadaryou <kawaharadaryou@student.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/30 04:32:08 by kawaharadar       #+#    #+#             */
/*   Updated: 2024/11/12 20:54:43 by kawaharadar      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PHONEBOOK_HPP
# define PHONEBOOK_HPP

# include "contact.hpp"
# include <limits>
# include <iostream>
# include <sstream>

class PhoneBook {
	private:
		Contact _contacts[8];

	public:
		PhoneBook();
		~PhoneBook();
		void add();
		void search();
		void usage();
};

	void printExampleOverView();

#endif
