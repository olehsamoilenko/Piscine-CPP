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
		Form & operator=(Form const &);
		~Form(void);
		Form(std::string name, int gradeSign, int gradeExec);
		std::string getName(void) const;
		bool getSigned(void) const;
		int getGradeRequiredSign(void) const;
		int getGradeRequiredExec(void) const;
		void beSigned(Bureaucrat const & b);

	private:
		Form(void);
		const std::string _name;
		bool _signed;
		const int _gradeRequiredSign;
		const int _gradeRequiredExec;

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
};

std::ostream & operator<<(std::ostream & o, Form const & src);

#endif
