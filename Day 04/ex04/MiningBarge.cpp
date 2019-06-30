/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MiningBarge.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: osamoile <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/06/29 21:48:55 by osamoile          #+#    #+#             */
/*   Updated: 2019/06/29 21:48:57 by osamoile         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "MiningBarge.hpp"

void MiningBarge::equip(IMiningLaser * laser)
{
	int i = -1;
	while (++i < 4)
	{
		if (_laser[i] == NULL)
		{
			_laser[i] = laser;
			break ;
		}
	}
}

void MiningBarge::mine(IAsteroid * ast) const
{
	if (_laser[0] == NULL)
	{
		std::cout << "* no lasers *" << std::endl;
		return ;
	}
	int i = -1;
	while (++i < 4)
	{
		if (_laser[i] == NULL)
			break ;
		_laser[i]->mine(ast);
	}
}

MiningBarge::MiningBarge(void)
{
	int i = -1;
	while (++i < 4)
		_laser[i] = NULL;
}

MiningBarge::~MiningBarge(void)
{

}

MiningBarge & MiningBarge::operator=(MiningBarge const &)
{
	return (*this);
}

MiningBarge::MiningBarge(MiningBarge const & src)
{
	*this = src;
}

