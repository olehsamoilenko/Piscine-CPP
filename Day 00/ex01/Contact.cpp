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

void Contact::_printShortData(std::string data) const
{
	if (data.length() > 10)
	{
		data.erase(data.begin() + 9, data.end());
		std::cout << data << '.';
	}
	else
	{
		std::cout << std::setw(10) << data;
	}
}

void Contact::showShort(int index) const
{
	std::cout << std::setw(10) << index;
	std::cout << "|";
	_printShortData(_firstName);
	std::cout << "|";
	_printShortData(_lastName);
	std::cout << "|";
	_printShortData(_nickname);
	std::cout << std::endl;
}

void Contact::showLong(void) const
{
	std::cout << _firstName << std::endl;
	std::cout << _lastName << std::endl;
	std::cout << _nickname << std::endl;
	std::cout << _login << std::endl;
	std::cout << _postalAddress << std::endl;
	std::cout << _emailAddress << std::endl;
	std::cout << _phoneNumber << std::endl;
	std::cout << _birthdayDate << std::endl;
	std::cout << _favoriteMeal << std::endl;
	std::cout << _underwearColor << std::endl;
	std::cout << _darkestSecret << std::endl;
}

void Contact::setFirstName(std::string firstName) { _firstName = firstName; }
void Contact::setLastName(std::string lastName) { _lastName = lastName; }
void Contact::setNickname(std::string nickname) { _nickname = nickname; }
void Contact::setLogin(std::string login) { _login = login; }
void Contact::setPostalAddress(std::string address) { _postalAddress = address; }
void Contact::setEmailAddress(std::string address) { _emailAddress = address; }
void Contact::setPhoneNumber(std::string phone) { _phoneNumber = phone; }
void Contact::setBirthdayDate(std::string date) { _birthdayDate = date; }
void Contact::setFavoriteMeal(std::string meal) { _favoriteMeal = meal; }
void Contact::setUnderwearColor(std::string color) { _underwearColor = color; }
void Contact::setDarkestSecret(std::string secret) { _darkestSecret = secret; }
