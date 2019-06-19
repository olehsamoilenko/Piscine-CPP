/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: osamoile <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/06/19 11:13:45 by osamoile          #+#    #+#             */
/*   Updated: 2019/06/19 11:13:47 by osamoile         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <fstream>
#include <iostream>

bool		readFile(std::string & text, std::string filename)
{
	std::ifstream	ifs(filename);
	std::string		line;

	if (!ifs.is_open())
		return (false);
	while (!ifs.eof())
	{
		if (!text.empty())
			text += "\n";
		std::getline(ifs, line);
		text += line;
	}
	ifs.close();
	return (true);
}

void		replace(std::string & text, std::string r_what, std::string r_for)
{
	int pos;
	while ( (pos = text.find(r_what, 0)) != text.npos)
	{
		text.replace(pos, r_what.length(),
			r_for, 0, r_for.length());
	}
}

void		writeToFile(std::string text, std::string filename)
{
	std::ofstream	ofs(filename);
	ofs << text;
	ofs.close();
}

int			main(int argc, char ** argv)
{
	if (argc != 4)
	{
		std::cout << "Usage: ./replace file s1 s2" << std::endl;
		return (-1);
	}
	else
	{
		std::string text;
		if (!readFile(text, std::string(argv[1])))
		{
			std::cout << "Can't open file " << argv[1] << std::endl;
			return (-1);
		}
		else
		{
			replace(text, std::string(argv[2]), std::string(argv[3]));
			writeToFile(text, std::string(argv[1]) + ".replace");
			return (0);
		}
	}
}
