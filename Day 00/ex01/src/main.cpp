/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: osamoile <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/06/10 12:47:45 by osamoile          #+#    #+#             */
/*   Updated: 2019/06/10 12:47:50 by osamoile         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Book.hpp"
#include <iostream>

// bool	readString(std::string *str)
// {
// 	std::cin >> *str;
// 	if (std::cin.fail())
// 	{
// 		if (std::cin.eof())
// 			exit(0);
// 		std::cin.clear();
// 		return (false);
// 	}
// 	return (true);
// }

// bool	readInt(int *i)
// {
// 	std::cin >> *i;
// 	if (std::cin.fail())
// 	{
// 		if (std::cin.eof())
// 			exit(0);
// 		std::cin.clear();
// 		return (false);
// 	}
// 	return (true);
// }

int		main(int argc, char **argv)
{
	Book book;
	std::string input;

	while (!std::cin.eof())
	{
		std::cout << "Enter a command: SEARCH | ADD | EXIT" << std::endl;
		std::cin >> input;
		if (input == "SEARCH")
			book.search();
		else if (input == "ADD")
			book.add();
		else if (input == "EXIT")
			return (0);
		else
			std::cout << "* Unknown command *" << std::endl;
	}
}
