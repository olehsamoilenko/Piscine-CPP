/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   IAsteroid.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: osamoile <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/06/29 21:45:38 by osamoile          #+#    #+#             */
/*   Updated: 2019/06/29 21:45:39 by osamoile         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef IASTEROID_HPP
# define IASTEROID_HPP

# include <iostream>

class StripMiner;
class DeepCoreMiner;

class IAsteroid
{
	public:
		virtual ~IAsteroid() {}
		virtual std::string beMined(StripMiner *) const = 0;
		virtual std::string beMined(DeepCoreMiner *) const = 0;
		virtual std::string getName() const = 0;
};

#endif