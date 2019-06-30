/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AWeapon.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: osamoile <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/06/28 13:35:37 by osamoile          #+#    #+#             */
/*   Updated: 2019/06/28 13:35:39 by osamoile         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef AWEAPON_HPP
# define AWEAPON_HPP

# include <iostream>

class AWeapon
{
	public:
		AWeapon(AWeapon const &);
		AWeapon & operator=(AWeapon const &);
		AWeapon(std::string const & name, int apcost, int damage);
		virtual ~AWeapon(void);

		std::string getName() const;
		int getAPCost() const;
		int getDamage() const;
		virtual void attack() const = 0;

	private:
		AWeapon(void);

		std::string _name;
		int _damage;
		int _APCost;
};

#endif
