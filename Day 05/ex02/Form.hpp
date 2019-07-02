/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: osamoile <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/01 12:23:47 by osamoile          #+#    #+#             */
/*   Updated: 2019/07/01 12:23:48 by osamoile         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FORM_HPP
# define FORM_HPP

#include <iostream>

class Bureaucrat;

class Form
{
	public:
		Form(Form const &);
		Form(std::string name, int gradeSign, int gradeExec);
		Form(std::string name, int gradeSign, int gradeExec, std::string target);
		virtual ~Form(void);
		Form & operator=(Form const &);
		std::string getTarget(void) const;
		std::string getName(void) const;
		bool getSigned(void) const;
		int getGradeRequiredSign(void) const;
		int getGradeRequiredExec(void) const;
		void beSigned(Bureaucrat const & b);
		virtual void execute(Bureaucrat const & executor) const = 0;

	protected:
		Form(void);

	private:
		const std::string _name;
		bool _signed;
		const int _gradeRequiredSign;
		const int _gradeRequiredExec;
		std::string _target;

		class GradeTooLowException : public std::exception
		{
			public:
				GradeTooLowException(void);
				GradeTooLowException(std::string msg);
				GradeTooLowException(GradeTooLowException const &);
				GradeTooLowException & operator=(GradeTooLowException const &);
				virtual ~GradeTooLowException(void) throw();
				virtual const char * what() const throw();

			private:
				std::string _msg;
		};
		
		class GradeTooHighException : public std::exception
		{
			public:
				GradeTooHighException(void);
				GradeTooHighException(std::string msg);
				GradeTooHighException(GradeTooHighException const &);
				GradeTooHighException & operator=(GradeTooHighException const &);
				virtual ~GradeTooHighException(void) throw();
				virtual const char * what() const throw();

			private:
				std::string _msg;
		};

		class FormNotSignedException : public std::exception
		{
			public:
				FormNotSignedException(void);
				FormNotSignedException(std::string msg);
				FormNotSignedException(FormNotSignedException const &);
				FormNotSignedException & operator=(FormNotSignedException const &);
				virtual ~FormNotSignedException(void) throw();
				virtual const char * what() const throw();

			private:
				std::string _msg;
		};
};

std::ostream & operator<<(std::ostream & o, Form const & src);

#endif
