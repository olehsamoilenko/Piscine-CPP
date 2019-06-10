/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Book.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: osamoile <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/06/10 12:47:45 by osamoile          #+#    #+#             */
/*   Updated: 2019/06/10 12:47:50 by osamoile         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BOOK_HPP
# define BOOK_HPP


# include "Contact.hpp"

class Book
{
	public:
		Book(void);
		~Book(void);

		void		search(void);
		void		add(void);

	private:
		int			_numberContacts;
		Contact		_contacts[8];
};

#endif
