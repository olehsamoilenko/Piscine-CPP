/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   DeepCoreMiner.cpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: osamoile <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/06/29 21:48:55 by osamoile          #+#    #+#             */
/*   Updated: 2019/06/29 21:48:57 by osamoile         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "DeepCoreMiner.hpp"

void DeepCoreMiner::mine(IAsteroid * ast)
{
	std::cout << "* mining deep ... got " <<
		ast->beMined(this) << " ! *" << std::endl;
}

DeepCoreMiner::DeepCoreMiner(void)
{

}

DeepCoreMiner::~DeepCoreMiner(void)
{

}

DeepCoreMiner & DeepCoreMiner::operator=(DeepCoreMiner const & src)
{
	if (this != &src)
	{
		
	}
	return (*this);
}

DeepCoreMiner::DeepCoreMiner(DeepCoreMiner const & src)
{
	*this = src;
}

