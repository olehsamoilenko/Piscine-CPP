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

int Squad::getCount() const
{
	return (_n);
}

ISpaceMarine* Squad::getUnit(int n) const
{
	if (n < 0 || n > _n)
		return (0);
	else
		return (_marines[n]);
}

int Squad::push(ISpaceMarine* marine)
{
	if (_n == 0)
	{
		_marines = new ISpaceMarine*[1];
		_marines[0] = marine;
	}
	else
	{
		int i = -1;
		while (++i < _n)
		{
			if (_marines[i] == marine)
			{
				std::cout << "* already exist *" << std::endl;
				return (_n);
			}
		}
		i = -1;
		ISpaceMarine ** tmp = new ISpaceMarine*[_n + 1];
		while (++i < _n)
			tmp[i] = _marines[i];
		tmp[_n] = marine;
		delete [] _marines;
		_marines = tmp;
	}
	_n += 1;
	return (_n);
}

Squad::Squad(void) : _n(0)
{

}

Squad::~Squad(void)
{
	int i = -1;
	if (_n != 0)
	{
		while (++i < _n)
			delete _marines[i];
		delete [] _marines;
	}
}

Squad & Squad::operator=(Squad const & src)
{
	if (this != &src)
	{
		int i = -1;
		if (_n != 0)
		{
			while (++i < _n)
				delete _marines[i];
			delete [] _marines;
			_n = src._n;
			_marines = new ISpaceMarine*[_n];
			i = -1;
			while (++i < _n)
				_marines[i] = src._marines[i]->clone();
		}
	}
	return (*this);
}

Squad::Squad(Squad const & src)
{
	*this = src;
}