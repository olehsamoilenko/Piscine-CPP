/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   BocalSteroid.hpp                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: osamoile <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/06/29 21:49:00 by osamoile          #+#    #+#             */
/*   Updated: 2019/06/29 21:49:01 by osamoile         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BOCALSTEROID_HPP
# define BOCALSTEROID_HPP

# include "IAsteroid.hpp"

class BocalSteroid : public IAsteroid
{
	public:
		std::string beMined(DeepCoreMiner *) const;
		std::string beMined(StripMiner *) const;
		std::string getName() const;

		BocalSteroid(void);
		BocalSteroid(BocalSteroid const &);
		BocalSteroid & operator=(BocalSteroid const &);
		virtual ~BocalSteroid();
};

#endif
