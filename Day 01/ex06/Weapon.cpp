/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: osamoile <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/06/13 16:36:20 by osamoile          #+#    #+#             */
/*   Updated: 2019/06/13 16:36:22 by osamoile         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Weapon.hpp"

Weapon::Weapon(void)
{

}

Weapon::Weapon(std::string type)
{
	_type = type;
}

const std::string & Weapon::getType(void)
{
	return (_type);
}

void Weapon::setType(std::string type)
{
	_type = type;
}