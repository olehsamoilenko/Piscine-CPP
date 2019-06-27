/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: osamoile <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/06/26 20:49:14 by osamoile          #+#    #+#             */
/*   Updated: 2019/06/26 20:49:16 by osamoile         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CLAPTRAP_HPP
# define CLAPTRAP_HPP

# include <iostream>

class ClapTrap
{
	public:
		ClapTrap(void);
		ClapTrap(std::string name);
		ClapTrap(ClapTrap const & src);
		~ClapTrap(void);
		ClapTrap & operator=(ClapTrap const & src);

		void		rangedAttack(std::string const & target);
		void		meleeAttack(std::string const & target);
		void		takeDamage(unsigned int amount);
		void		beRepaired(unsigned int amount);

	protected:
		int			_hitPoints;
		int			_maxHitPoints;
		int			_energyPoints;
		int			_maxEnergyPoints;
		int			_level;
		std::string	_name;
		int			_meleeAttackDamage;
		int			_rangedAttackDamage;
		int			_armorDamageReduction;
};

#endif
