/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Peon.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: osamoile <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/06/23 16:16:04 by osamoile          #+#    #+#             */
/*   Updated: 2019/06/23 16:16:05 by osamoile         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PEON_HPP
# define PEON_HPP

# include "Victim.hpp"

class Peon : public Victim
{
	public:
		Peon(void);
		Peon(Peon const & src);
		Peon & operator=(Peon const & src);
		~Peon(void);
		Peon(std::string name);
		
		void getPolymorphed(void) const;

};

#endif
