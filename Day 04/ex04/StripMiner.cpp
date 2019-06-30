/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   StripMiner.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: osamoile <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/06/29 21:48:55 by osamoile          #+#    #+#             */
/*   Updated: 2019/06/29 21:48:57 by osamoile         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "StripMiner.hpp"

void StripMiner::mine(IAsteroid * ast)
{
	std::cout << "* strip mining ... got " <<
		ast->beMined(this) << " ! *" << std::endl;
}

StripMiner::StripMiner(void)
{

}

StripMiner::~StripMiner(void)
{

}

StripMiner & StripMiner::operator=(StripMiner const &)
{
	return (*this);
}

StripMiner::StripMiner(StripMiner const & src)
{
	*this = src;
}

