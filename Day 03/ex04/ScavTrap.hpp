/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: osamoile <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/06/26 20:00:48 by osamoile          #+#    #+#             */
/*   Updated: 2019/06/26 20:00:49 by osamoile         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SCAVTRAP_HPP
#define SCAVTRAP_HPP

# include "ClapTrap.hpp"

class ScavTrap : public ClapTrap
{
	public:
		ScavTrap(void);
		ScavTrap(std::string name);
		ScavTrap(ScavTrap const & src);
		~ScavTrap(void);
		ScavTrap & operator=(ScavTrap const & src);

		void challengeNewcomer(void);

	private:
		void _chests(void);
		void _kill(void);
		void _corrode(void);
		void _money(void);
		void _vechile(void);
};

#endif
