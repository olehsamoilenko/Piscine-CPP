/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: osamoile <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/06/10 12:47:45 by osamoile          #+#    #+#             */
/*   Updated: 2019/06/10 12:47:50 by osamoile         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CONTACT_HPP
# define CONTACT_HPP

# include <iostream>

class Contact
{
	public:
		void		showShort(int index) const;
		void		showLong(void) const;

		void		setFirstName(std::string name);
		void		setLastName(std::string name);
		void		setNickname(std::string nickname);
		void		setLogin(std::string login);
		void		setPostalAddress(std::string address);
		void		setEmailAddress(std::string address);
		void		setPhoneNumber(std::string phone);
		void		setBirthdayDate(std::string date);
		void		setFavoriteMeal(std::string meal);
		void		setUnderwearColor(std::string color);
		void		setDarkestSecret(std::string secret);
		
	private:
		std::string	_firstName;
		std::string	_lastName;
		std::string	_nickname;
		std::string	_login;
		std::string	_postalAddress;
		std::string	_emailAddress;
		std::string	_phoneNumber;
		std::string	_birthdayDate;
		std::string	_favoriteMeal;
		std::string	_underwearColor;
		std::string	_darkestSecret;

		void		_printShortData(std::string data) const;
};

#endif
