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

int		main(void)
{
	Book book;
	std::string input;

	while (!std::cin.eof())
	{
		std::cout << "Enter a command (SEARCH, ADD, EXIT): ";
		std::getline(std::cin, input);
		
		if (input == "SEARCH")
			book.search();
		else if (input == "ADD")
			book.add();
		else if (input == "EXIT")
			return (0);
		else
			std::cout << "* Unknown command *" << std::endl;
	}
	std::cout << std::endl << "Bye-bye." << std::endl;
	return (-1);
}
