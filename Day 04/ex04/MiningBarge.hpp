/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MiningBarge.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: osamoile <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/06/29 21:49:00 by osamoile          #+#    #+#             */
/*   Updated: 2019/06/29 21:49:01 by osamoile         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef MININGBARGE_HPP
# define MININGBARGE_HPP

# include "IMiningLaser.hpp"

class MiningBarge
{
	public:
		void equip(IMiningLaser*);
		void mine(IAsteroid*) const;

		MiningBarge(void);
		MiningBarge(MiningBarge const &);
		MiningBarge & operator=(MiningBarge const &);
		virtual ~MiningBarge();

	private:
		IMiningLaser * _laser[4];
};

#endif
