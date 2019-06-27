/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: osamoile <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/06/21 11:39:08 by osamoile          #+#    #+#             */
/*   Updated: 2019/06/21 11:39:09 by osamoile         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FRAGTRAP_HPP
# define FRAGTRAP_HPP

# include "ClapTrap.hpp"

class FragTrap : public ClapTrap
{
	public:
		FragTrap(void);
		FragTrap(std::string name);
		FragTrap(FragTrap const & src);
		~FragTrap(void);
		FragTrap & operator=(FragTrap const & src);

		void vaulthunter_dot_exe(std::string const & target);

	private:
		void _mechromagician(std::string const & target);
		void _funzerker(std::string const & target);
		void _blightbot(std::string const & target);
		void _miniontrap(std::string const & target);
		void _rubberDucky(std::string const & target);
};

#endif
