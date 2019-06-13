/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: osamoile <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/06/10 12:47:45 by osamoile          #+#    #+#             */
/*   Updated: 2019/06/10 12:47:50 by osamoile         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Contact.hpp"

#include <iomanip>
// #include <string>

Contact::Contact(void)
{

}

Contact::~Contact(void)
{

}

void	Contact::_printShortData(std::string data) const
{
	if (data.length() > 10)
	{
		data.erase(data.begin() + 9, data.end());
		std::cout << data << '.';
	}
	else
	{
		std::cout << std::setw(10);
		std::cout << data; // one line ?
	}
}

void	Contact::showShort(int index) const
{
	std::cout << std::setw(10);
	std::cout << index; // one line ?
	std::cout << "|";
	_printShortData(_firstName);
	std::cout << "|";
	_printShortData(_lastName);
	std::cout << "|";
	_printShortData(_nickname);
	std::cout << std::endl;
}

void	Contact::showLong(void) const
{
	std::cout << _firstName << std::endl;
	std::cout << _lastName << std::endl;
	std::cout << _nickname << std::endl;
}

void	Contact::setFirstName(std::string firstName)
{
	this->_firstName = firstName;
}

void	Contact::setLastName(std::string lastName)
{
	this->_lastName = lastName;
}

void	Contact::setNickname(std::string nickname)
{
	this->_nickname = nickname;
}
