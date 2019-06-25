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
	int prev_pos = 0;
	while ( (pos = text.find(r_what.c_str(), prev_pos)) != -1)
	{
		text.replace(pos, r_what.length(),
			r_for, 0, r_for.length());
		prev_pos = pos + r_for.length();
	}
}

bool		writeToFile(std::string text, std::string filename)
{
	std::ofstream	ofs(filename);
	if (!ofs.is_open())
		return (false);
	else
	{
		ofs << text;
		ofs.close();
		return (true);
	}
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
			std::cout << "Can't open input file " << std::endl;
			return (-1);
		}
		else
		{
			if (std::string(argv[2]) == "" || std::string(argv[3]) == "")
			{
				std::cout << "Strings can't be empty" << std::endl;
				return (-1);
			}
			replace(text, std::string(argv[2]), std::string(argv[3]));
			if (!writeToFile(text, std::string(argv[1]) + ".replace"))
			{
				std::cout << "Can't open output file " << std::endl;
				return (-1);
			}
			return (0);
		}
	}
}
