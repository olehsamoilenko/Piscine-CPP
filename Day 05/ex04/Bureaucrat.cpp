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

#include "Form.hpp"
#include "Bureaucrat.hpp"

void Bureaucrat::executeForm(Form const & f) const
{
	f.execute(*this);
	std::cout << "Bureaucrat " << _name << " (Grade " << _grade << ") executes a "
		<< f.getName() << " (s.grade " << f.getGradeRequiredSign() <<
		", ex.grade " << f.getGradeRequiredExec() << ")" << std::endl;
	std::cout << "     targeted on " << f.getTarget() << " (";
	if (f.getSigned())
		std::cout << "Signed";
	else
		std::cout << "Unigned";
	std::cout << ")" << std::endl;
}

void Bureaucrat::signForm(Form & f) const
{
	f.beSigned(*this);
	std::cout << "Bureaucrat " << _name << " (Grade " << _grade << ") signs a "
		<< f.getName() << " (s.grade " << f.getGradeRequiredSign() <<
		", ex.grade " << f.getGradeRequiredExec() << ")" << std::endl;
	std::cout << "     targeted on " << f.getTarget() << " (";
	if (f.getSigned())
		std::cout << "Signed";
	else
		std::cout << "Unigned";
	std::cout << ")" << std::endl;
}

Bureaucrat::Bureaucrat(std::string name, int grade)
	: _name(name)
{
	if (grade < 1)
		throw (Bureaucrat::GradeTooHighException(
			"grade can't be higher than 1"));
	if (grade > 150)
		throw (Bureaucrat::GradeTooLowException(
			"grade can't be lower than 150"));
	_grade = grade;
}

void Bureaucrat::incrementGrade(void)
{
	if (_grade == 1)
		throw (Bureaucrat::GradeTooHighException(
			"can't increment the highest grade"));
	_grade -= 1;
}

void Bureaucrat::decrementGrade(void)
{
	if (_grade == 150)
		throw (Bureaucrat::GradeTooLowException(
			"can't decrement the lowest grade"
		));
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

std::ostream & operator<<(std::ostream & o, Bureaucrat const & src)
{
	o << "<" << src.getName() << ">, bureaucrat grade <"
		<< src.getGrade() << ">." << std::endl;
	return (o);
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

Bureaucrat::GradeTooLowException::GradeTooLowException(void)
	: _msg("Bureaucrat::GradeTooLowException")
{

}

Bureaucrat::GradeTooLowException::GradeTooLowException(std::string msg)
	: _msg(msg)
{
	
}

const char * Bureaucrat::GradeTooLowException::what() const throw()
{
	return (_msg.c_str());
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
		_msg = src._msg;
	}
	return (*this);
}

Bureaucrat::GradeTooLowException::~GradeTooLowException(void) throw()
{
	
}

Bureaucrat::GradeTooHighException::GradeTooHighException(void)
	: _msg("Bureaucrat::GradeTooHighException")
{

}

Bureaucrat::GradeTooHighException::GradeTooHighException(std::string msg)
	: _msg(msg)
{
	
}

const char * Bureaucrat::GradeTooHighException::what() const throw()
{
	return (_msg.c_str());
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
		_msg = src._msg;
	}
	return (*this);
}

Bureaucrat::GradeTooHighException::~GradeTooHighException(void) throw()
{
	
}
