/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   OfficeBlock.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: osamoile <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/01 12:23:41 by osamoile          #+#    #+#             */
/*   Updated: 2019/07/01 12:23:43 by osamoile         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "OfficeBlock.hpp"
#include "Intern.hpp"
#include "Bureaucrat.hpp"

void OfficeBlock::doBureaucracy(std::string formName, std::string target)
{
	if (_intern == nullptr)
		throw(OfficeBlock::InternNotSetException("intern isn't at the working place!"));
	if (_signer == nullptr)
		throw(OfficeBlock::SignerNotSetException("signer isn't at the working place!"));
	if (_executor == nullptr)
		throw(OfficeBlock::ExecutorNotSetException("executor isn't at the working place!"));
	Form * f = _intern->makeForm(formName, target);
	_signer->signForm(*f);
	_executor->executeForm(*f);
	std::cout << "That'll do, " << target << ". That'll do ..." << std::endl;
}

void OfficeBlock::setIntern(Intern & intern)
{
	if (_intern != nullptr)
		throw(OfficeBlock::InternAlreadySetException("we are not ready to fire the intern"));
	_intern = &intern;
}

void OfficeBlock::setSigner(Bureaucrat & signer)
{
	if (_signer != nullptr)
		throw(OfficeBlock::InternAlreadySetException("we are not ready to fire the signer"));
	_signer = &signer;
}

void OfficeBlock::setExecutor(Bureaucrat & executor)
{
	if (_executor != nullptr)
		throw(OfficeBlock::InternAlreadySetException("we are not ready to fire the executor"));
	_executor = &executor;
}

OfficeBlock::OfficeBlock(Intern * i, Bureaucrat * s, Bureaucrat * e)
{
	_intern = i;
	_signer = s;
	_executor = e;
}

OfficeBlock::OfficeBlock(void)
{
	_intern = nullptr;
	_signer = nullptr;
	_executor = nullptr;
}

OfficeBlock::OfficeBlock(OfficeBlock const & src)
{
	*this = src;
}

OfficeBlock & OfficeBlock::operator=(OfficeBlock const & src)
{
	if (this != &src)
	{
		_intern = src._intern;
		_signer = src._signer;
		_executor = src._executor;
	}
	return (*this);
}

OfficeBlock::~OfficeBlock(void)
{
	
}

OfficeBlock::InternNotSetException::InternNotSetException(void)
	: _msg("OfficeBlock::InternNotSetException")
{

}

OfficeBlock::InternNotSetException::InternNotSetException(std::string msg)
	: _msg(msg)
{
	
}

const char * OfficeBlock::InternNotSetException::what() const throw()
{
	return (_msg.c_str());
}


OfficeBlock::InternNotSetException::InternNotSetException(
	OfficeBlock::InternNotSetException const & src)
{
	*this = src;
}

OfficeBlock::InternNotSetException & OfficeBlock::InternNotSetException
	::operator=(OfficeBlock::InternNotSetException const & src)
{
	if (this != &src)
	{
		_msg = src._msg;
	}
	return (*this);
}

OfficeBlock::InternNotSetException::~InternNotSetException(void) throw()
{
	
}

OfficeBlock::SignerNotSetException::SignerNotSetException(void)
	: _msg("OfficeBlock::SignerNotSetException")
{

}

OfficeBlock::SignerNotSetException::SignerNotSetException(std::string msg)
	: _msg(msg)
{
	
}

const char * OfficeBlock::SignerNotSetException::what() const throw()
{
	return (_msg.c_str());
}


OfficeBlock::SignerNotSetException::SignerNotSetException(
	OfficeBlock::SignerNotSetException const & src)
{
	*this = src;
}

OfficeBlock::SignerNotSetException & OfficeBlock::SignerNotSetException
	::operator=(OfficeBlock::SignerNotSetException const & src)
{
	if (this != &src)
	{
		_msg = src._msg;
	}
	return (*this);
}

OfficeBlock::SignerNotSetException::~SignerNotSetException(void) throw()
{
	
}

OfficeBlock::ExecutorNotSetException::ExecutorNotSetException(void)
	: _msg("OfficeBlock::ExecutorNotSetException")
{

}

OfficeBlock::ExecutorNotSetException::ExecutorNotSetException(std::string msg)
	: _msg(msg)
{
	
}

const char * OfficeBlock::ExecutorNotSetException::what() const throw()
{
	return (_msg.c_str());
}


OfficeBlock::ExecutorNotSetException::ExecutorNotSetException(
	OfficeBlock::ExecutorNotSetException const & src)
{
	*this = src;
}

OfficeBlock::ExecutorNotSetException & OfficeBlock::ExecutorNotSetException
	::operator=(OfficeBlock::ExecutorNotSetException const & src)
{
	if (this != &src)
	{
		_msg = src._msg;
	}
	return (*this);
}

OfficeBlock::ExecutorNotSetException::~ExecutorNotSetException(void) throw()
{
	
}

OfficeBlock::InternAlreadySetException::InternAlreadySetException(void)
	: _msg("OfficeBlock::InternAlreadySetException")
{

}

OfficeBlock::InternAlreadySetException::InternAlreadySetException(std::string msg)
	: _msg(msg)
{
	
}

const char * OfficeBlock::InternAlreadySetException::what() const throw()
{
	return (_msg.c_str());
}


OfficeBlock::InternAlreadySetException::InternAlreadySetException(
	OfficeBlock::InternAlreadySetException const & src)
{
	*this = src;
}

OfficeBlock::InternAlreadySetException & OfficeBlock::InternAlreadySetException
	::operator=(OfficeBlock::InternAlreadySetException const & src)
{
	if (this != &src)
	{
		_msg = src._msg;
	}
	return (*this);
}

OfficeBlock::InternAlreadySetException::~InternAlreadySetException(void) throw()
{
	
}

OfficeBlock::SignerAlreadySetException::SignerAlreadySetException(void)
	: _msg("OfficeBlock::SignerAlreadySetException")
{

}

OfficeBlock::SignerAlreadySetException::SignerAlreadySetException(std::string msg)
	: _msg(msg)
{
	
}

const char * OfficeBlock::SignerAlreadySetException::what() const throw()
{
	return (_msg.c_str());
}


OfficeBlock::SignerAlreadySetException::SignerAlreadySetException(
	OfficeBlock::SignerAlreadySetException const & src)
{
	*this = src;
}

OfficeBlock::SignerAlreadySetException & OfficeBlock::SignerAlreadySetException
	::operator=(OfficeBlock::SignerAlreadySetException const & src)
{
	if (this != &src)
	{
		_msg = src._msg;
	}
	return (*this);
}

OfficeBlock::SignerAlreadySetException::~SignerAlreadySetException(void) throw()
{
	
}

OfficeBlock::ExecuterAlreadySetException::ExecuterAlreadySetException(void)
	: _msg("OfficeBlock::ExecuterAlreadySetException")
{

}

OfficeBlock::ExecuterAlreadySetException::ExecuterAlreadySetException(std::string msg)
	: _msg(msg)
{
	
}

const char * OfficeBlock::ExecuterAlreadySetException::what() const throw()
{
	return (_msg.c_str());
}


OfficeBlock::ExecuterAlreadySetException::ExecuterAlreadySetException(
	OfficeBlock::ExecuterAlreadySetException const & src)
{
	*this = src;
}

OfficeBlock::ExecuterAlreadySetException & OfficeBlock::ExecuterAlreadySetException
	::operator=(OfficeBlock::ExecuterAlreadySetException const & src)
{
	if (this != &src)
	{
		_msg = src._msg;
	}
	return (*this);
}

OfficeBlock::ExecuterAlreadySetException::~ExecuterAlreadySetException(void) throw()
{
	
}