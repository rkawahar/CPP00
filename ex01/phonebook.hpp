/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   phonebook.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rkawahar <rkawahar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/30 04:32:08 by kawaharadar       #+#    #+#             */
/*   Updated: 2024/11/13 08:34:33 by rkawahar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PHONEBOOK_HPP
# define PHONEBOOK_HPP

# include "contact.hpp"
# include <limits>
# include <iostream>
# include <sstream>
# include <cstdlib>

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
