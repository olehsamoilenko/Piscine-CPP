/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   StripMiner.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: osamoile <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/06/29 21:49:00 by osamoile          #+#    #+#             */
/*   Updated: 2019/06/29 21:49:01 by osamoile         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef STRIPMINER_HPP
# define STRIPMINER_HPP

# include "IMiningLaser.hpp"

class StripMiner : public IMiningLaser
{
	public:
		void mine(IAsteroid * ast);

		StripMiner(void);
		StripMiner(StripMiner const &);
		StripMiner & operator=(StripMiner const &);
		virtual ~StripMiner();
};

#endif
