/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Character.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: osamoile <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/06/28 14:34:40 by osamoile          #+#    #+#             */
/*   Updated: 2019/06/28 14:34:42 by osamoile         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Character.hpp"

Character::Character(std::string name)
{
	_name = name;
	int i = -1;
	while (++i < 4)
		_inventory[i] = NULL;
}

std::string const & Character::getName() const
{
	return (_name);
}

void Character::equip(AMateria* m)
{
	int i = -1;
	while (++i < 4)
	{
		if (_inventory[i] == NULL) // ?
		{
			_inventory[i] = m;
			std::cout << "* putting materia " << m->getType()
				<< " to the slot " << i << " *" << std::endl;
			return ;
		}
	}
	std::cout << "* full inventory *" << std::endl;
}

void Character::unequip(int idx)
{
	if (idx >= 0 && idx < 4 && _inventory[idx] != NULL)
	{
		_inventory[idx] = NULL;
	}
	else
		std::cout << "* trying to unequip empty slot *" << std::endl;

}

void Character::use(int idx, ICharacter& target)
{
	if (idx >= 0 && idx < 4 && _inventory[idx] != NULL)
	{
		_inventory[idx]->use(target);

	}
	else
		std::cout << "* trying to use empty slot *" << std::endl;

}


Character::Character(void)
{

}

Character::~Character(void)
{

}

Character & Character::operator=(Character const & src)
{
	if (this != &src)
	{
		_name = src._name;
		int i = -1;
		while (++i < 4)
		{
			if (src._inventory[i] != NULL)
				_inventory[i] = src._inventory[i]->clone();
		}
	}
	return (*this);
}

Character::Character(Character const & src)
{
	*this = src;
}
