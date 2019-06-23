/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Sorcerer.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: osamoile <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/06/23 16:16:04 by osamoile          #+#    #+#             */
/*   Updated: 2019/06/23 16:16:05 by osamoile         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SORCERER_HPP
# define SORCERER_HPP

# include <iostream>

class Sorcerer
{
	public:
		Sorcerer(Sorcerer const & src);
		~Sorcerer(void);
		Sorcerer & operator=(Sorcerer const & src);
		Sorcerer(std::string name, std::string title);

		std::string getName(void) const;
		std::string getTitle(void) const;

	private:
		Sorcerer(void);

		std::string	_name;
		std::string	_title;

	
};

std::ostream & operator<<(std::ostream & o, Sorcerer const & src);

#endif
