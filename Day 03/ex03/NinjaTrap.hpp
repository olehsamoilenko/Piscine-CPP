/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   NinjaTrap.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: osamoile <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/06/27 19:18:08 by osamoile          #+#    #+#             */
/*   Updated: 2019/06/27 19:18:09 by osamoile         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef NINJATRAP_HPP
# define NINJATRAP_HPP

# include "FragTrap.hpp"
# include "ScavTrap.hpp"

class NinjaTrap : public ClapTrap
{
	public:
		NinjaTrap(void);
		NinjaTrap(std::string name);
		NinjaTrap(NinjaTrap const & src);
		~NinjaTrap(void);
		NinjaTrap & operator=(NinjaTrap const & src);

		void ninjaShoebox(ClapTrap & trap);
		void ninjaShoebox(FragTrap & trap);
		void ninjaShoebox(ScavTrap & trap);
		void ninjaShoebox(NinjaTrap & trap);
};

#endif
