/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   CentralBureaucracy.cpp                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: osamoile <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/01 12:23:41 by osamoile          #+#    #+#             */
/*   Updated: 2019/07/01 12:23:43 by osamoile         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Intern.hpp"
#include "OfficeBlock.hpp"
#include "Bureaucrat.hpp"
#include "CentralBureaucracy.hpp"

void CentralBureaucracy::doBureuacracy(void)
{
	for (int i = 0; i < _index; i++)
	{
		std::cout << "     Target #" << i + 1 << " processing..." << std::endl;
		try
		{
			_center[rand() % 20].doBureaucracy("shrubbery creation", _queue[i]);
		}
		catch(std::exception & e)
		{
			std::cout << e.what() << std::endl;
		}
	}
	
}

void CentralBureaucracy::queueUp(std::string target)
{
	if (_index == 50)
		throw(CentralBureaucracy::QueueFullException("center can't solve so many targets"));
	_queue[++_index] = target;
	std::cout << "Target " << target << " queued" << std::endl;
}

void CentralBureaucracy::feed(Bureaucrat & b)
{
	for (int i = 0; i < 20; i++)
	{
		try
		{
			_center[i].setSigner(b);
			std::cout << b.getName() << " now working in office #"
				<< i <<" as signer " << std::endl;
			return ;
		}
		catch (OfficeBlock::SignerAlreadySetException &)
		{
			try
			{
				_center[i].setExecutor(b);
				std::cout << b.getName() << " now working in office #"
					<< i <<" as executer " << std::endl;
				return ;
			}
			catch (OfficeBlock::ExecuterAlreadySetException &)
			{

			}
		}
	}
	throw(CentralBureaucracy::CenterIsFullException("there is no open vacancies"));
}

CentralBureaucracy::CentralBureaucracy(void)
	: _index(0)
{
	for (int i = 0; i < 20; i++)
	{
		Intern *intern = new Intern();
		_center[i].setIntern(*intern);
	}
}

CentralBureaucracy::CentralBureaucracy(CentralBureaucracy const & src)
{
	*this = src;
}

CentralBureaucracy & CentralBureaucracy::operator=(CentralBureaucracy const & src)
{
	if (this != &src)
	{

	}
	return (*this);
}

CentralBureaucracy::~CentralBureaucracy(void)
{
	
}

CentralBureaucracy::CenterIsFullException::CenterIsFullException(void)
	: _msg("CentralBureaucracy::CenterIsFullException")
{

}

CentralBureaucracy::CenterIsFullException::CenterIsFullException(std::string msg)
	: _msg(msg)
{
	
}

const char * CentralBureaucracy::CenterIsFullException::what() const throw()
{
	return (_msg.c_str());
}


CentralBureaucracy::CenterIsFullException::CenterIsFullException(
	CentralBureaucracy::CenterIsFullException const & src)
{
	*this = src;
}

CentralBureaucracy::CenterIsFullException & CentralBureaucracy::CenterIsFullException
	::operator=(CentralBureaucracy::CenterIsFullException const & src)
{
	if (this != &src)
	{
		_msg = src._msg;
	}
	return (*this);
}

CentralBureaucracy::CenterIsFullException::~CenterIsFullException(void) throw()
{

}

CentralBureaucracy::QueueFullException::QueueFullException(void)
	: _msg("CentralBureaucracy::QueueFullException")
{

}

CentralBureaucracy::QueueFullException::QueueFullException(std::string msg)
	: _msg(msg)
{
	
}

const char * CentralBureaucracy::QueueFullException::what() const throw()
{
	return (_msg.c_str());
}


CentralBureaucracy::QueueFullException::QueueFullException(
	CentralBureaucracy::QueueFullException const & src)
{
	*this = src;
}

CentralBureaucracy::QueueFullException & CentralBureaucracy::QueueFullException
	::operator=(CentralBureaucracy::QueueFullException const & src)
{
	if (this != &src)
	{
		_msg = src._msg;
	}
	return (*this);
}

CentralBureaucracy::QueueFullException::~QueueFullException(void) throw()
{

}