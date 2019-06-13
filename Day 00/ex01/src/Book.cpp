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

void	Book::search(void) const
{
	if (this->_numberContacts == 0)
		std::cout << "* Contact book is empty *" << std::endl;
	else
	{
		int j = -1;
		while (++j < this->_numberContacts)
			this->_contacts[j].showShort(j);
		int index = -1;
		std::cout << "Enter an index for more info: ";
		std::cin >> index;
		std::cout << "OUTPUT: " << index << std::endl;
		std::cout << "FAIL: " << std::cin.fail() << std::endl;
		std::cin.clear();
		exit(1);
		if (index >= 0 && index < _numberContacts)
			_contacts[index].showLong();
		else
			std::cout << "* Sorry, contact with index " << index
				<< " doesn't exist *" << std::endl;
	}
}

void	Book::add(void)
{
	if (this->_numberContacts < 8)
	{
		std::cout << "Creating a new contact..." << std::endl;
		std::string buf;
		std::cout << "\tEnter first name: ";
		std::cin >> buf;
		this->_contacts[this->_numberContacts].setFirstName(buf);
		std::cout << "\tEnter last name: ";
		std::cin >> buf;
		this->_contacts[this->_numberContacts].setLastName(buf);
		std::cout << "\tEnter nickname: ";
		std::cin >> buf;
		this->_contacts[this->_numberContacts].setNickname(buf);

		this->_numberContacts++;
		std::cout << "* Contact successfully created! *" << std::endl;
	}
	else
		std::cout << "* Contact book is full *" << std::endl;
}
