/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   SuperTrap.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: osamoile <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/06/27 19:40:01 by osamoile          #+#    #+#             */
/*   Updated: 2019/06/27 19:40:02 by osamoile         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SUPERTRAP_HPP
# define SUPERTRAP_HPP

# include "FragTrap.hpp"
# include "NinjaTrap.hpp"

class SuperTrap : public FragTrap, public NinjaTrap
{
	public:
		SuperTrap(void);
		SuperTrap(std::string name);
		SuperTrap(SuperTrap const & src);
		~SuperTrap(void);
		SuperTrap & operator=(SuperTrap const & src);
};

#endif
