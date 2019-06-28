/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Squad.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: osamoile <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/06/28 20:48:30 by osamoile          #+#    #+#             */
/*   Updated: 2019/06/28 20:48:32 by osamoile         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Squad.hpp"

Squad::Squad(void)
{
	
}

Squad::~Squad(void)
{

}

Squad & Squad::operator=(Squad const & src)
{
	if (this != &src)
	{

	}
	return (*this);
}

Squad::Squad(Squad const & src)
{
	*this = src;
}