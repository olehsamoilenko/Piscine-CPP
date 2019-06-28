/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Victim.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: osamoile <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/06/23 16:16:04 by osamoile          #+#    #+#             */
/*   Updated: 2019/06/23 16:16:05 by osamoile         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef VICTIM_HPP
# define VICTIM_HPP

# include <iostream>

class Victim
{
	public:
		Victim(void);
		Victim(Victim const & src);
		Victim & operator=(Victim const & src);
		Victim(std::string name);
		virtual ~Victim(void);
		
		std::string getName(void) const;
		virtual void getPolymorphed(void) const;

	protected:
		std::string	_name;
};

std::ostream & operator<<(std::ostream & o, Victim const & src);

#endif
