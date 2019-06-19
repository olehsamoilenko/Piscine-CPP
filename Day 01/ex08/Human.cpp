/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Human.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: osamoile <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/06/19 13:44:36 by osamoile          #+#    #+#             */
/*   Updated: 2019/06/19 13:44:37 by osamoile         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Human.hpp"

void	Human::meleeAttack(std::string const & target)
{
	std::cout << "Melle atack to " << target << "!" << std::endl;
}

void	Human::rangedAttack(std::string const & target)
{
	std::cout << "Ranged atack to " << target << "!" << std::endl;
}

void	Human::intimidatingShout(std::string const & target)
{
	std::cout << "Intimidating shout to " << target << "!" << std::endl;
}

typedef void (Human::*func_ptr)(std::string const &);

void	Human::action(std::string const & action_name,
			std::string const & target)
{
	func_ptr methods[3] = {
		&Human::meleeAttack,
		&Human::rangedAttack,
		&Human::intimidatingShout
	};

	std::string names[3] = {
		"meleeAttack",
		"rangedAttack",
		"intimidatingShout"
	};

	int i = -1;
	while (++i < names->length())
	{
		if (action_name == names[i])
		{
			(this->*methods[i])(target);
			return ;
		}
	}
	std::cout << "Human can't recognise the '"
		<< action_name << "' action:(" << std::endl;
}
