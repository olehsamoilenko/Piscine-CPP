/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Book.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: osamoile <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/06/10 12:47:45 by osamoile          #+#    #+#             */
/*   Updated: 2019/06/10 12:47:50 by osamoile         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Book.hpp"

Book::Book(void)
{

}

Book::~Book(void)
{
	
}

void	Book::search(void)
{
	if (this->_numberContacts == 0)
		std::cout << "* Contact book is empty *" << std::endl;
	else
	{
		int j = -1;
		while (++j < this->_numberContacts)
			this->_contacts[j].show(j);
	}
}

void	Book::add(void)
{
	if (this->_numberContacts < 8)
	{
		std::cout << "Creating a new contact..." << std::endl;
		std::string buf;
		std::cout << "Enter first name: ";
		std::cin >> buf;
		this->_contacts[this->_numberContacts].setFirstName(buf);
		std::cout << "Enter last name: ";
		std::cin >> buf;
		this->_contacts[this->_numberContacts].setLastName(buf);
		std::cout << "Enter nickname: ";
		std::cin >> buf;
		this->_contacts[this->_numberContacts].setNickname(buf);

		this->_numberContacts++;
		std::cout << "Contact successfully created!" << std::endl;
	}
	else
		std::cout << "* Contact book is full *" << std::endl;
}

/* ??????????????
Then the program will prompt again for the index of the desired entry and
displays the contact’s information, one field per line. If the input makes no
sense, define a relevant behavior.
??????????????? */