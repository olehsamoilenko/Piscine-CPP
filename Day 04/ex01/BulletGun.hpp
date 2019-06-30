/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   BulletGun.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: osamoile <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/06/28 13:40:34 by osamoile          #+#    #+#             */
/*   Updated: 2019/06/28 13:40:38 by osamoile         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BULLETGUN_HPP
# define BULLETGUN_HPP

# include "AWeapon.hpp"

class BulletGun : public AWeapon
{
	public:
		BulletGun(void);
		BulletGun(BulletGun const &);
		BulletGun & operator=(BulletGun const &);
		virtual ~BulletGun(void);

		void attack(void) const;
};

#endif
