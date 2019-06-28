/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Enemy.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: osamoile <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/06/28 14:34:57 by osamoile          #+#    #+#             */
/*   Updated: 2019/06/28 14:34:58 by osamoile         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ENEMY_HPP
# define ENEMY_HPP

# include <iostream>

class Enemy
{
	public:
		Enemy(Enemy const &);
		Enemy & operator=(Enemy const &);
		Enemy(int hp, std::string const & type);
		virtual ~Enemy();

		std::string /*[...]*/ getType() const;
		int getHP(void) const;
		virtual void takeDamage(int);
	
	protected:
		Enemy(void);

		int _hp;
		std::string _type;
};

#endif