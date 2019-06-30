/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Beast.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: osamoile <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/06/28 14:34:40 by osamoile          #+#    #+#             */
/*   Updated: 2019/06/28 14:34:42 by osamoile         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Beast.hpp"

Beast::Beast(void) : Enemy(100, "Beast")
{
	std::cout << "I am beast . Prepare to die !" << std::endl;
}

Beast::~Beast(void)
{
	std::cout << "Noooooo !" << std::endl;
}

Beast & Beast::operator=(Beast const & src)
{
	if (this != &src)
		Enemy::operator=(src);
	return (*this);
}

Beast::Beast(Beast const & src) :
	Enemy(src.getHP(), src.getType())
{
	*this = src;
}
