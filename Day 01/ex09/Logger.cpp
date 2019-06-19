/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Logger.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: osamoile <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/06/19 15:44:20 by osamoile          #+#    #+#             */
/*   Updated: 2019/06/19 15:44:22 by osamoile         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Logger.hpp"

Logger::Logger(std::string filename)
{
	_ofs.open(filename, std::fstream::app);
}

void	Logger::_logToConsole(std::string log)
{
	std::cout << log << std::endl;
}

void	Logger::_logToFile(std::string log)
{
	_ofs << log << std::endl;
}

std::string	Logger::_makeLogEntry(std::string message)
{
	time_t now = time(0);
	struct tm *ltm = localtime(&now);
	char str[22];
	strftime(str, 22, "[%Y/%m/%d %H:%M:%S] ", ltm);
	return (str + message);
}

typedef void (Logger::*func_ptr)(std::string);

void	Logger::log(std::string const & dest, std::string const & message)
{
	func_ptr method[] = {
		&Logger::_logToConsole,
		&Logger::_logToFile
	};

	std::string names[] = {
		"console",
		"file"
	};

	int i = -1;
	while (++i < names->length())
	{
		if (dest == names[i])
		{
			(this->*method[i])(_makeLogEntry(message));
			return ;
		}
	}
	std::cout << "Impossible: logging to " << dest << std::endl;
}