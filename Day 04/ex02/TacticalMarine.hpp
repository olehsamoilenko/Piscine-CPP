/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   TacticalMarine.hpp                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: osamoile <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/06/28 20:44:11 by osamoile          #+#    #+#             */
/*   Updated: 2019/06/28 20:44:13 by osamoile         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef TACTICALMARINE_HPP
# define TACTICALMARINE_HPP

# include "ISpaceMarine.hpp"

class TacticalMarine : public ISpaceMarine
{
	public:
		TacticalMarine(void);
		TacticalMarine(TacticalMarine const &);
		TacticalMarine & operator=(TacticalMarine const &);
		virtual ~TacticalMarine(void);

		TacticalMarine * clone(void) const;
		void battleCry() const;
		void rangedAttack() const;
		void meleeAttack() const;
};

#endif
