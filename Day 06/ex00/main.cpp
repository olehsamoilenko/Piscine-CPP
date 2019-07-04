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
#include <iomanip>
#include <sstream>

int		main(int argc, char ** argv)
{
	if (argc == 2)
	{
		double d = atof(argv[1]);
		char c = static_cast<char>(d);
		float f = static_cast<float>(d);
		int i = static_cast<int>(d);

		std::cout << "char: ";
		std::stringstream ssChar;
		int resChar;
		if (!(ssChar << argv[1] && ssChar >> resChar))
			std::cout << "impossible";
		else if (std::isprint(c))
			std::cout << "'" << c << "'";
		else
			std::cout << "Non displayable";
		std::cout << std::endl;

		std::cout << "int: ";
		std::stringstream ssInt;
		int resInt;
		if (ssInt << argv[1] && ssInt >> resInt)
			std::cout << i;
		else
			std::cout << "impossible";
		std::cout << std::endl;

		std::cout << "float: ";
		std::cout << std::fixed << std::setprecision(1) << f << 'f';
		std::cout << std::endl;

		std::cout << "double: ";
		std::cout << d;
		std::cout << std::endl;
	}
	else
		std::cout << "usage: ./convert value" << std::endl;
	return (0);
}
