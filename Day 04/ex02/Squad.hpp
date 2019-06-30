/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Squad.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: osamoile <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/06/28 20:48:35 by osamoile          #+#    #+#             */
/*   Updated: 2019/06/28 20:48:36 by osamoile         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SQUAD_HPP
# define SQUAD_HPP

# include "ISquad.hpp"
# include <iostream>

class Squad : public ISquad
{
	public:
		Squad(void);
		Squad(Squad const & src);
		Squad & operator=(Squad const & src);
		~Squad(void);

		int getCount() const;
		ISpaceMarine* getUnit(int) const;
		int push(ISpaceMarine*);

	private:
		int _n;
		ISpaceMarine ** _marines;
};

#endif
