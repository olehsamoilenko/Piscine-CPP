/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: osamoile <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/03 13:08:44 by osamoile          #+#    #+#             */
/*   Updated: 2019/07/03 13:08:46 by osamoile         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <cmath>
#include <iomanip>

int		main(int argc, char ** argv)
{
	if (argc == 2)
	{
		double d = atof(argv[1]);
		char c = static_cast<char>(d);
		float f = static_cast<float>(d);
		int i = static_cast<int>(d);

		std::cout << "char: ";
		if (std::isnan(f))
			std::cout << "impossible";
		else if (std::isprint(c))
			std::cout << "'" << c << "'";
		else
			std::cout << "Non displayable";
		std::cout << std::endl;

		std::cout << "int: ";
		if (std::isnan(d))
			std::cout << "impossible";
		else
			std::cout << i;
		std::cout << std::endl;

		std::cout << "float: ";
		if (std::isinf(f) && f > 0)
			std::cout << '+';
		std::cout << std::fixed << std::setprecision(1) << f << 'f';
		std::cout << std::endl;

		std::cout << "double: ";
		if (std::isinf(d) && d > 0)
			std::cout << '+' << d;
		else if (std::isinf(d) && d < 0)
			std::cout << d;
		else
			std::cout << d;
		std::cout << std::endl;
	}
	else
		std::cout << "usage: ./convert value" << std::endl;
	return (0);
}
