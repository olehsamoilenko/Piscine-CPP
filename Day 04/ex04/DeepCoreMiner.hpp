/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   DeepCoreMiner.hpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: osamoile <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/06/29 21:49:00 by osamoile          #+#    #+#             */
/*   Updated: 2019/06/29 21:49:01 by osamoile         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef DEEPCOREMINER_HPP
# define DEEPCOREMINER_HPP

# include "IMiningLaser.hpp"

class IMiningLaser;

class DeepCoreMiner : public IMiningLaser
{
	public:
		void mine(IAsteroid * ast);

		DeepCoreMiner(void);
		DeepCoreMiner(DeepCoreMiner const &);
		DeepCoreMiner & operator=(DeepCoreMiner const &);
		virtual ~DeepCoreMiner();
};

#endif
