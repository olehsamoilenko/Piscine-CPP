/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AssaultTerminator.hpp                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: osamoile <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/06/28 20:44:11 by osamoile          #+#    #+#             */
/*   Updated: 2019/06/28 20:44:13 by osamoile         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ASSAULTTERMINATOR_HPP
# define ASSAULTTERMINATOR_HPP

# include "ISpaceMarine.hpp"

class AssaultTerminator : public ISpaceMarine
{
	public:
		AssaultTerminator(void);
		AssaultTerminator(AssaultTerminator const &);
		AssaultTerminator & operator=(AssaultTerminator const &);
		virtual ~AssaultTerminator(void);

		AssaultTerminator * clone(void) const;
		void battleCry() const;
		void rangedAttack() const;
		void meleeAttack() const;
};

#endif
