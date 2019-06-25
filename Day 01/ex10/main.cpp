/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: osamoile <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/06/19 16:47:08 by osamoile          #+#    #+#             */
/*   Updated: 2019/06/19 16:47:09 by osamoile         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <fstream>
#include <cerrno>
#include <iostream>
#include <sstream>

void	readFromStdIn(void)
{
	std::string tmp;
	while (true)
	{
		std::cin >> tmp;
		if (std::cin.eof())
			break ;
		std::cout << tmp << std::endl;
	}
}

void	readFromFile(std::string filename)
{
	std::ifstream	ifs(filename);
	std::stringstream ss;
	if (ss << ifs.rdbuf())
		std::cout << ss.str();
	else if (errno != 0)
	{
		std::cout << "cat: " << filename << ": "
			<< strerror(errno) << std::endl;
		errno = 0;
	}
}

int		main(int argc, char ** argv)
{
	if (argc > 1)
	{
		int i = 0;
		while (++i < argc)
		{
			if (std::string(argv[i]) == "-")
				readFromStdIn();
			else
				readFromFile(argv[i]);
		}
	}
	else
		readFromStdIn();
	return (0);
}