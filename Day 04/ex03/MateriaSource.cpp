/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MateriaSource.cpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: osamoile <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/06/28 14:34:40 by osamoile          #+#    #+#             */
/*   Updated: 2019/06/28 14:34:42 by osamoile         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "MateriaSource.hpp"

void MateriaSource::learnMateria(AMateria* m)
{
	int i = -1;
	while (++i < 4)
	{
		if (_source[i] == NULL)
		{
			_source[i] = m;
			return ;
		}
	}
	std::cout << "* source is full *" << std::endl;
}

AMateria* MateriaSource::createMateria(std::string const & type)
{
	int i = -1;
	while (++i < 4)
	{
		if (_source[i]->getType() == type)
			return (_source[i]->clone());
	}
	std::cout << "* type doesn't exist *" << std::endl;
	return (NULL);
}

MateriaSource::MateriaSource(void)
{
	int i = -1;
	while (++i < 4)
		_source[i] = NULL;
}

MateriaSource::~MateriaSource(void)
{

}

MateriaSource & MateriaSource::operator=(MateriaSource const & src)
{
	if (this != &src)
	{
		
	}
	return (*this);
}

MateriaSource::MateriaSource(MateriaSource const & src)
{
	*this = src;
}
