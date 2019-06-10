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
		Contact(void);
		~Contact(void);

		void	show(int index);
		void	setFirstName(std::string firstName);
		void	setLastName(std::string lastName);
		void	setNickname(std::string nickname);
		
	private:
		std::string		_firstName;
		std::string		_lastName;
		std::string		_nickname;
		// std::string		_login;
		// std::string		_postalAddress;
		// std::string		_emailAddress;
		// std::string		_phoneNumber;
		// std::string		_birthdayDate;
		// std::string		_favoriteMeal;
		// std::string		_underwearColor;
		// std::string		_darkestSecret;

		void		_printData(std::string data);
		
};

#endif
