/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   phonebook.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kawaharadaryou <kawaharadaryou@student.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/30 04:32:08 by kawaharadar       #+#    #+#             */
/*   Updated: 2024/10/30 08:32:22 by kawaharadar      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PHONEBOOK_HPP
# define PHONEBOOK_HPP

# include "contact.hpp"
# include <limits>
# include <iostream>
# include <sstream>

class PhoneBook {
	private: Contact _contacts[8];

	public: PhoneBook();
	public: ~PhoneBook();
	public: void add();
	public: void search();
	public: void usage();
};

#endif
