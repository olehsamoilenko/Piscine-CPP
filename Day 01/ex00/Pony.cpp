/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Pony.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: osamoile <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/06/13 16:36:20 by osamoile          #+#    #+#             */
/*   Updated: 2019/06/13 16:36:22 by osamoile         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Pony.hpp"

Pony::Pony(std::string name, double weight)
{
	_name = name;
	_weight = weight;
	std::cout << "Pony " << _name << " successfully created!" << std::endl;
}

Pony::~Pony(void)
{
	std::cout << "Pony " << _name << " dies :(" << std::endl;
}

void Pony::run(void)
{
	std::cout << "Pony " << _name << " weighting " << _weight
		<< "kg is running!" << std::endl;
}