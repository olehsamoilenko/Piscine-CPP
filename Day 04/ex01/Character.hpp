/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Character.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: osamoile <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/06/28 14:53:29 by osamoile          #+#    #+#             */
/*   Updated: 2019/06/28 14:53:31 by osamoile         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CHARACTER_HPP
# define CHARACTER_HPP

# include "AWeapon.hpp"
# include "Enemy.hpp"

class Character
{
	public:
		Character(Character const &);
		Character & operator=(Character const &);
		Character(std::string const & name);
		~Character();

		void recoverAP(void);
		void equip(AWeapon*);
		void attack(Enemy*);
		std::string getName() const;
		int getAP(void) const;
		AWeapon * getWeapon(void) const;

	private:
		Character(void);

		std::string _name;
		int _ap;
		AWeapon * _weapon;
};

std::ostream & operator<<(std::ostream & o, Character const & src);

#endif
