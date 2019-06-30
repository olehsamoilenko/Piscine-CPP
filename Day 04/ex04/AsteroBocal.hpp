/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AsteroBocal.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: osamoile <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/06/29 21:49:00 by osamoile          #+#    #+#             */
/*   Updated: 2019/06/29 21:49:01 by osamoile         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ASTEROBOCAL_HPP
# define ASTEROBOCAL_HPP

# include "IAsteroid.hpp"

class AsteroBocal : public IAsteroid
{
	public:
		std::string beMined(DeepCoreMiner *) const;
		std::string beMined(StripMiner *) const;
		std::string getName() const;

		AsteroBocal(void);
		AsteroBocal(AsteroBocal const &);
		AsteroBocal & operator=(AsteroBocal const &);
		virtual ~AsteroBocal();
};

#endif
