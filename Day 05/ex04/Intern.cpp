/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Intern.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: osamoile <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/01 12:23:41 by osamoile          #+#    #+#             */
/*   Updated: 2019/07/01 12:23:43 by osamoile         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Intern.hpp"
#include "Form.hpp"
#include "ShrubberyCreationForm.hpp"
#include "PresidentialPardonForm.hpp"
#include "RobotomyRequestForm.hpp"

typedef Form * (Intern:: * funcPtr)(std::string) const;

Form * Intern::makeForm(std::string formName, std::string target) const
{
	std::string names[] = {
		"shrubbery creation",
		"robotomy request",
		"presidential pardon"
	};
	funcPtr methods[] = {
		&Intern::_shurubberyCreation,
		&Intern::_robotomyRequest,
		&Intern::_presidentialPardon
	};
	int i = -1;
	while (++i < 3)
	{
		if (names[i] == formName)
		{
			Form * tmp = (this->*methods[i])(target);
			std::cout << "Intern creates " << tmp->getName() << " (s.grade "
				<< tmp->getGradeRequiredSign() << ", ex.grade " <<
				tmp->getGradeRequiredExec() << ") targeted on " <<
				target << " (";
			if (tmp->getSigned())
				std::cout << "Signed";
			else
				std::cout << "Unigned";
			std::cout << ")" << std::endl;
			return (tmp);
		}
	}
	throw (Intern::UnknownFormException("form doesn't exist"));
}

Form * Intern::_shurubberyCreation(std::string target) const
{
	return (new ShrubberyCreationForm(target));
}

Form * Intern::_robotomyRequest(std::string target) const
{
	return (new RobotomyRequestForm(target));
}

Form * Intern::_presidentialPardon(std::string target) const
{
	return (new PresidentialPardonForm(target));
}

Intern::Intern(void)
{

}

Intern::Intern(Intern const & src)
{
	*this = src;
}

Intern & Intern::operator=(Intern const & src)
{
	if (this != &src)
	{

	}
	return (*this);
}

Intern::~Intern(void)
{
	
}

Intern::UnknownFormException::UnknownFormException(void)
	: _msg("Intern::UnknownFormException")
{

}

Intern::UnknownFormException::UnknownFormException(std::string msg)
	: _msg(msg)
{
	
}

const char * Intern::UnknownFormException::what() const throw()
{
	return (_msg.c_str());
}


Intern::UnknownFormException::UnknownFormException(
	Intern::UnknownFormException const & src)
{
	*this = src;
}

Intern::UnknownFormException & Intern::UnknownFormException
	::operator=(Intern::UnknownFormException const & src)
{
	if (this != &src)
	{
		_msg = src._msg;
	}
	return (*this);
}

Intern::UnknownFormException::~UnknownFormException(void) throw()
{
	
}
