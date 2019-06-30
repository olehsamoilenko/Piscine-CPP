/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   BocalSteroid.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: osamoile <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/06/29 21:48:55 by osamoile          #+#    #+#             */
/*   Updated: 2019/06/29 21:48:57 by osamoile         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "BocalSteroid.hpp"

std::string BocalSteroid::beMined(DeepCoreMiner *) const
{
	return "Zazium";
}

std::string BocalSteroid::beMined(StripMiner *) const
{
	return "Krpite";
}

std::string BocalSteroid::getName() const
{
	return "BocalSteroid";
}

BocalSteroid::BocalSteroid(void)
{

}

BocalSteroid::~BocalSteroid(void)
{

}

BocalSteroid & BocalSteroid::operator=(BocalSteroid const &)
{
	return (*this);
}

BocalSteroid::BocalSteroid(BocalSteroid const & src)
{
	*this = src;
}

