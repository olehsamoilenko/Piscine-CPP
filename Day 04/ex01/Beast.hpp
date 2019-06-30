/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Beast.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: osamoile <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/06/28 14:34:57 by osamoile          #+#    #+#             */
/*   Updated: 2019/06/28 14:34:58 by osamoile         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BEAST_HPP
# define BEAST_HPP

# include "Enemy.hpp"

class Beast : public Enemy
{
	public:
		Beast(void);
		Beast(Beast const &);
		Beast & operator=(Beast const &);
		virtual ~Beast();
};

#endif