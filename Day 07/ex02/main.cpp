/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: osamoile <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/04 19:32:07 by osamoile          #+#    #+#             */
/*   Updated: 2019/07/04 19:32:09 by osamoile         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Array.hpp"

template <typename T>
void	func(T value)
{
	Array<T> arr(5);
	arr[0] = value;
	Array<T> copy = arr;
	copy[1] = value;
	Array<T> copy2(copy);
	try
	{
		for (unsigned int i = 0; i < 10; i++)
			std::cout << "Value #" << i << ": " << copy2[i] << std::endl;
	}
	catch(std::out_of_range & e)
	{
		std::cout << "Exception: " << e.what() << std::endl;
	}
	std::cout << std::string(40, '-') << std::endl;
}

int		main(void)
{
	func(42);
	func(42.42f);
	func(std::string("string"));
	return (0);
}
