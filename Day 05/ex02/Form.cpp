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

#include "Bureaucrat.hpp"
#include "Form.hpp"

void Form::execute(Bureaucrat const & executor) const
{
	if (!_signed)
		throw (Form::FormNotSignedException(
			"impossible to execute not signed form"));
	if (executor.getGrade() > getGradeRequiredExec())
		throw (Form::GradeTooLowException(
			"bureaucrat's grade is too low for execution"));
}

Form::Form(std::string name, int gradeSign, int gradeExec, std::string target)
	: _name(name), _signed(false), _gradeRequiredSign(gradeSign),
	_gradeRequiredExec(gradeExec), _target(target)
{
	if (_gradeRequiredSign < 1)
		throw (Form::GradeTooHighException("grade for signing can't be higher than 1"));
	if (_gradeRequiredExec < 1)
		throw (Form::GradeTooHighException("grade for executing can't be higher than 1"));
	if (_gradeRequiredSign > 150)
		throw (Form::GradeTooLowException("grade for signing can't be lower than 150"));
	if (_gradeRequiredExec > 150)
		throw (Form::GradeTooLowException("grade for executing can't be lower than 150"));
}

Form::Form(std::string name, int gradeSign, int gradeExec)
	: _name(name), _signed(false),
	_gradeRequiredSign(gradeSign), _gradeRequiredExec(gradeExec)
{
	if (_gradeRequiredSign < 1)
		throw (Form::GradeTooHighException("grade for signing can't be higher than 1"));
	if (_gradeRequiredExec < 1)
		throw (Form::GradeTooHighException("grade for executing can't be higher than 1"));
	if (_gradeRequiredSign > 150)
		throw (Form::GradeTooLowException("grade for signing can't be lower than 150"));
	if (_gradeRequiredExec > 150)
		throw (Form::GradeTooLowException("grade for executing can't be lower than 150"));
}

void Form::beSigned(Bureaucrat const & b)
{
	if (b.getGrade() <= _gradeRequiredSign)
		_signed = true;
	else
		throw (Form::GradeTooLowException("grade of bureaucrat is too low"));
}

std::string Form::getTarget(void) const
{
	return (_target);
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
		_target = src._target;
	}
	return (*this);
}

Form::~Form(void)
{
	
}

Form::GradeTooLowException::GradeTooLowException(void)
	: _msg("Form::GradeTooLowException")
{

}

Form::GradeTooLowException::GradeTooLowException(std::string msg)
	: _msg(msg)
{
	
}

const char * Form::GradeTooLowException::what() const throw()
{
	return (_msg.c_str());
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
		_msg = src._msg;
	}
	return (*this);
}

Form::GradeTooLowException::~GradeTooLowException(void) throw()
{
	
}

Form::GradeTooHighException::GradeTooHighException(void)
	: _msg("Form::GradeTooHighException")
{

}

Form::GradeTooHighException::GradeTooHighException(std::string msg)
	: _msg(msg)
{
	
}

const char * Form::GradeTooHighException::what() const throw()
{
	return (_msg.c_str());
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
		_msg = src._msg;
	}
	return (*this);
}

Form::GradeTooHighException::~GradeTooHighException(void) throw()
{
	
}

Form::FormNotSignedException::FormNotSignedException(void)
	: _msg("Form::FormNotSignedException")
{

}

Form::FormNotSignedException::FormNotSignedException(std::string msg)
	: _msg(msg)
{
	
}

const char * Form::FormNotSignedException::what() const throw()
{
	return (_msg.c_str());
}


Form::FormNotSignedException::FormNotSignedException(
	Form::FormNotSignedException const & src)
{
	*this = src;
}

Form::FormNotSignedException & Form::FormNotSignedException
	::operator=(Form::FormNotSignedException const & src)
{
	if (this != &src)
	{
		_msg = src._msg;
	}
	return (*this);
}

Form::FormNotSignedException::~FormNotSignedException(void) throw()
{
	
}
