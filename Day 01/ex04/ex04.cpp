/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ex04.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: osamoile <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/06/25 12:32:14 by osamoile          #+#    #+#             */
/*   Updated: 2019/06/25 12:32:15 by osamoile         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

int		main(void)
{
	std::string str = "HI THIS IS BRAIN";
	std::string * ptrStr = &str;
	std::string & refStr = str;
	std::cout << "ptr: " << *ptrStr << std::endl;
	std::cout << "ref: " << refStr << std::endl;
	return (0);
}
