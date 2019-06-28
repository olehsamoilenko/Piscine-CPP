/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Rose.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: osamoile <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/06/23 16:16:04 by osamoile          #+#    #+#             */
/*   Updated: 2019/06/23 16:16:05 by osamoile         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ROSE_HPP
# define ROSE_HPP

# include "Victim.hpp"

class Rose : public Victim
{
	public:
		Rose(void);
		Rose(Rose const & src);
		Rose & operator=(Rose const & src);
		~Rose(void);
		Rose(std::string name);
		
		void getPolymorphed(void) const;

};

#endif
