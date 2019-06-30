/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AsteroBocal.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: osamoile <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/06/29 21:48:55 by osamoile          #+#    #+#             */
/*   Updated: 2019/06/29 21:48:57 by osamoile         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AsteroBocal.hpp"

std::string AsteroBocal::beMined(DeepCoreMiner *) const
{
	return "Thorite";
}

std::string AsteroBocal::beMined(StripMiner *) const
{
	return "Flavium";
}

std::string AsteroBocal::getName() const
{
	return "AsteroBocal";
}

AsteroBocal::AsteroBocal(void)
{

}

AsteroBocal::~AsteroBocal(void)
{

}

AsteroBocal & AsteroBocal::operator=(AsteroBocal const & src)
{
	if (this != &src)
	{
		
	}
	return (*this);
}

AsteroBocal::AsteroBocal(AsteroBocal const & src)
{
	*this = src;
}

