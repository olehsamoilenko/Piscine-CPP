/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   whatever.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: osamoile <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/04 16:49:51 by osamoile          #+#    #+#             */
/*   Updated: 2019/07/04 16:49:52 by osamoile         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

template <typename T>
void		swap(T & value1, T & value2)
{
	T tmp = value1;
	value1 = value2;
	value2 = tmp;
}

template <typename T>
T const &	min(T const & value1, T const & value2)
{
	if (value1 >= value2)
		return (value2);
	else
		return (value1);
}

template <typename T>
T const &	max(T const & value1, T const & value2)
{
	if (value1 > value2)
		return (value1);
	else
		return (value2);
}

template <typename T>
void		process(T a, T b)
{
	::swap( a, b );
	std::cout << "a = " << a << ", b = " << b << std::endl;
	std::cout << "min( a, b ) = " << ::min( a, b ) << std::endl;
	std::cout << "max( a, b ) = " << ::max( a, b ) << std::endl;
	std::cout << std::string(30, '-') << std::endl;
}

int		main(void)
{
	process(1, 3);
	process(4.2, 5.3);
	process("hello", "Oleh");
	process(1, 1);
	process(2.3, 2.3);
	return (0);
}