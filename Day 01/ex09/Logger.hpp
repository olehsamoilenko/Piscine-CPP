/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Logger.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: osamoile <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/06/19 15:44:26 by osamoile          #+#    #+#             */
/*   Updated: 2019/06/19 15:44:28 by osamoile         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LOGGER_HPP
# define LOGGER_HPP

# include <iostream>
# include <fstream>

class Logger
{
	public:
		Logger(std::string filename);
		~Logger(void);
		void			log(std::string const & dest, std::string const & message);

	private:
		std::ofstream	_ofs;

		void			_logToConsole(std::string log);
		void			_logToFile(std::string log);
		std::string		_makeLogEntry(std::string message);
};

#endif
