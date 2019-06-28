/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Enemy.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: osamoile <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/06/28 14:34:40 by osamoile          #+#    #+#             */
/*   Updated: 2019/06/28 14:34:42 by osamoile         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Enemy.hpp"

void Enemy::takeDamage(int damage)
{
	if (damage > 0)
		_hp -= damage;
	if (_hp < 0)
		_hp = 0;
}

int Enemy::getHP(void) const
{
	return (_hp);
}

std::string Enemy::getType(void) const
{
	return (_type);
}

Enemy::Enemy(int hp, std::string const & type)
{
	_hp = hp;
	_type = type;
}

Enemy::Enemy(void)
{

}

Enemy::~Enemy(void)
{

}

Enemy & Enemy::operator=(Enemy const & src)
{
	if (this != &src)
	{
		_hp = src._hp;
		_type = src._type;
	}
	return (*this);
}

Enemy::Enemy(Enemy const & src)
{
	*this = src;
}
