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

void	Book::search(void) const
{
	if (_numberContacts == 0)
		std::cout << "* Contact book is empty *" << std::endl;
	else
	{
		int j = -1;
		while (++j < _numberContacts)
			_contacts[j].showShort(j);
		int index;
		std::cout << "Enter an index for more info: ";
		std::cin >> index;
		if (std::cin.eof())
			return ;
		else if (std::cin.fail())
		{
			std::cout << "* Incorrect index *" << std::endl;
			std::cin.clear();
		}
		else if (index >= 0 && index < _numberContacts)
			_contacts[index].showLong();
		else
		{
			std::cout << "* Sorry, contact with index " << index
				<< " doesn't exist *" << std::endl;
		}
		std::cin.ignore(INT_MAX, '\n');
	}
}

void	Book::add(void)
{
	if (_numberContacts < 8)
	{
		std::cout << "Creating a new contact..." << std::endl;
		std::string buf;

		std::cout << "\tEnter first name: ";
		std::getline(std::cin, buf);
		if (std::cin.eof())
			return ;
		_contacts[_numberContacts].setFirstName(buf);

		std::cout << "\tEnter last name: ";
		std::getline(std::cin, buf);
		if (std::cin.eof())
			return ;
		_contacts[_numberContacts].setLastName(buf);

		std::cout << "\tEnter nickname: ";
		std::getline(std::cin, buf);
		if (std::cin.eof())
			return ;
		_contacts[_numberContacts].setNickname(buf);

		std::cout << "\tEnter login: ";
		std::getline(std::cin, buf);
		if (std::cin.eof())
			return ;
		_contacts[_numberContacts].setLogin(buf);

		std::cout << "\tEnter postal address: ";
		std::getline(std::cin, buf);
		if (std::cin.eof())
			return ;
		_contacts[_numberContacts].setPostalAddress(buf);

		std::cout << "\tEnter email address: ";
		std::getline(std::cin, buf);
		if (std::cin.eof())
			return ;
		_contacts[_numberContacts].setEmailAddress(buf);

		std::cout << "\tEnter phone number: ";
		std::getline(std::cin, buf);
		if (std::cin.eof())
			return ;
		_contacts[_numberContacts].setPhoneNumber(buf);

		std::cout << "\tEnter birthday date: ";
		std::getline(std::cin, buf);
		if (std::cin.eof())
			return ;
		_contacts[_numberContacts].setBirthdayDate(buf);

		std::cout << "\tEnter favorite meal: ";
		std::getline(std::cin, buf);
		if (std::cin.eof())
			return ;
		_contacts[_numberContacts].setFavoriteMeal(buf);

		std::cout << "\tEnter underwear color: ";
		std::getline(std::cin, buf);
		if (std::cin.eof())
			return ;
		_contacts[_numberContacts].setUnderwearColor(buf);

		std::cout << "\tEnter darkest secret: ";
		std::getline(std::cin, buf);
		if (std::cin.eof())
			return ;
		_contacts[_numberContacts].setDarkestSecret(buf);

		std::cout << "* Contact successfully created! *" << std::endl;
		_numberContacts++;
	}
	else
		std::cout << "* Contact book is full *" << std::endl;
}
