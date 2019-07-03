/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   CentralBureaucracy.hpp                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: osamoile <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/01 12:23:47 by osamoile          #+#    #+#             */
/*   Updated: 2019/07/01 12:23:48 by osamoile         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CENTRALBUREAUCRACY_HPP
# define CENTRALBUREAUCRACY_HPP

#include <iostream>

class OfficeBlock;
class Bureaucrat;

class CentralBureaucracy
{
	public:
		CentralBureaucracy(void);
		CentralBureaucracy(CentralBureaucracy const &);
		CentralBureaucracy & operator=(CentralBureaucracy const &);
		~CentralBureaucracy(void);

		void feed(Bureaucrat & b);
		void queueUp(std::string target);
		void doBureuacracy(void);

		class CenterIsFullException : public std::exception
		{
			public:
				CenterIsFullException(void);
				CenterIsFullException(std::string msg);
				CenterIsFullException(CenterIsFullException const &);
				CenterIsFullException & operator=(CenterIsFullException const &);
				virtual ~CenterIsFullException(void) throw();
				virtual const char * what() const throw();

			private:
				std::string _msg;
		};

		class QueueFullException : public std::exception
		{
			public:
				QueueFullException(void);
				QueueFullException(std::string msg);
				QueueFullException(QueueFullException const &);
				QueueFullException & operator=(QueueFullException const &);
				virtual ~QueueFullException(void) throw();
				virtual const char * what() const throw();

			private:
				std::string _msg;
		};

	private:
		int _index;
		OfficeBlock _center[20];
		std::string _queue[50];
};

#endif
