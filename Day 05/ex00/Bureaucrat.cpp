/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: osamoile <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/01 12:23:41 by osamoile          #+#    #+#             */
/*   Updated: 2019/07/01 12:23:43 by osamoile         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"

Bureaucrat::Bureaucrat(std::string name, int grade)
	: _name(name)
{
	if (grade < 1)
		throw (Bureaucrat::GradeTooHighException());
	if (grade > 150)
		throw (Bureaucrat::GradeTooLowException());
	_grade = grade;
}

void Bureaucrat::incrementGrade(void)
{
	if (_grade == 1)
		throw (Bureaucrat::GradeTooHighException());
	_grade -= 1;
}

void Bureaucrat::decrementGrade(void)
{
	if (_grade == 150)
		throw (Bureaucrat::GradeTooLowException());
	_grade += 1;
}

std::string Bureaucrat::getName(void) const
{
	return (_name);
}

int Bureaucrat::getGrade(void) const
{
	return (_grade);
}

const char * Bureaucrat::GradeTooLowException::what() const throw()
{
	return ("GradeTooLowException: "
		"grade can't be greater than 150");
}

const char * Bureaucrat::GradeTooHighException::what() const throw()
{
	return ("GradeTooHighException: "
		"grade can't be less than 1");
}

Bureaucrat::Bureaucrat(void)
{

}

Bureaucrat::Bureaucrat(Bureaucrat const & src)
	: _name(src._name)
{
	*this = src;
}

Bureaucrat & Bureaucrat::operator=(Bureaucrat const & src)
{
	if (this != &src)
	{
		_grade = src._grade;
	}
	return (*this);
}

Bureaucrat::~Bureaucrat(void)
{
	
}

std::ostream & operator<<(std::ostream & o, Bureaucrat const & src)
{
	o << "<" << src.getName() << ">, bureaucrat grade <"
		<< src.getGrade() << ">." << std::endl;
	return (o);
}

Bureaucrat::GradeTooLowException::GradeTooLowException(void)
{

}

Bureaucrat::GradeTooLowException::GradeTooLowException(
	Bureaucrat::GradeTooLowException const & src)
{
	*this = src;
}

Bureaucrat::GradeTooLowException & Bureaucrat::GradeTooLowException
	::operator=(Bureaucrat::GradeTooLowException const & src)
{
	if (this != &src)
	{

	}
	return (*this);
}

Bureaucrat::GradeTooLowException::~GradeTooLowException(void) throw()
{
	
}

Bureaucrat::GradeTooHighException::GradeTooHighException(void)
{

}

Bureaucrat::GradeTooHighException::GradeTooHighException(
	Bureaucrat::GradeTooHighException const & src)
{
	*this = src;
}

Bureaucrat::GradeTooHighException & Bureaucrat::GradeTooHighException
	::operator=(Bureaucrat::GradeTooHighException const & src)
{
	if (this != &src)
	{

	}
	return (*this);
}

Bureaucrat::GradeTooHighException::~GradeTooHighException(void) throw()
{
	
}
