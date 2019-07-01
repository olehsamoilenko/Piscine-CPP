/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: osamoile <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/01 12:23:41 by osamoile          #+#    #+#             */
/*   Updated: 2019/07/01 12:23:43 by osamoile         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Form.hpp"
#include "Bureaucrat.hpp"

Form::Form(std::string name, int gradeSign, int gradeExec)
	: _name(name), _signed(false),
	_gradeRequiredSign(gradeSign), _gradeRequiredExec(gradeExec)
{
	if (_gradeRequiredSign < 1 || _gradeRequiredExec < 1)
		throw (Form::GradeTooHighException());
	if (_gradeRequiredSign > 150 || _gradeRequiredExec > 150)
		throw (Form::GradeTooLowException());
}

void Form::beSigned(Bureaucrat const & b)
{
	if (b.getGrade() <= _gradeRequiredSign)
		_signed = true;
	else
		throw (Form::GradeTooLowException());
}

std::string Form::getName(void) const
{
	return (_name);
}

bool Form::getSigned(void) const
{
	return (_signed);
}

int Form::getGradeRequiredSign(void) const
{
	return (_gradeRequiredSign);
}

int Form::getGradeRequiredExec(void) const
{
	return (_gradeRequiredExec);
}

std::ostream & operator<<(std::ostream & o, Form const & src)
{
	o << "form <" << src.getName() << ">, <";
	if (!src.getSigned())
		o << "not ";
	o << "signed>, grade for signing <" << src.getGradeRequiredSign()
		<< ">, grade for execution <" << src.getGradeRequiredExec()
		<< ">." << std::endl;
	return (o);
}

const char * Form::GradeTooLowException::what() const throw()
{
	return ("* Form::GradeTooLowException *");
}

const char * Form::GradeTooHighException::what() const throw()
{
	return ("* Form::GradeTooHighException *");
}

Form::Form(void) : _gradeRequiredSign(0), _gradeRequiredExec(0)
{

}

Form::Form(Form const & src)
	: _name(src._name), _gradeRequiredSign(src._gradeRequiredSign),
	_gradeRequiredExec(src._gradeRequiredExec)
{
	*this = src;
}

Form & Form::operator=(Form const & src)
{
	if (this != &src)
	{
		_signed = src._signed;
	}
	return (*this);
}

Form::~Form(void)
{
	
}




Form::GradeTooLowException::GradeTooLowException(void)
{

}

Form::GradeTooLowException::GradeTooLowException(
	Form::GradeTooLowException const & src)
{
	*this = src;
}

Form::GradeTooLowException & Form::GradeTooLowException
	::operator=(Form::GradeTooLowException const & src)
{
	if (this != &src)
	{

	}
	return (*this);
}

Form::GradeTooLowException::~GradeTooLowException(void) throw()
{
	
}

Form::GradeTooHighException::GradeTooHighException(void)
{

}

Form::GradeTooHighException::GradeTooHighException(
	Form::GradeTooHighException const & src)
{
	*this = src;
}

Form::GradeTooHighException & Form::GradeTooHighException
	::operator=(Form::GradeTooHighException const & src)
{
	if (this != &src)
	{

	}
	return (*this);
}

Form::GradeTooHighException::~GradeTooHighException(void) throw()
{
	
}

