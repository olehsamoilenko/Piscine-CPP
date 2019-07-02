/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: osamoile <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/01 12:23:47 by osamoile          #+#    #+#             */
/*   Updated: 2019/07/01 12:23:48 by osamoile         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BUREAUCRAT_HPP
# define BUREAUCRAT_HPP

#include <iostream>

#include "Form.hpp"

class Bureaucrat
{
	public:
		Bureaucrat(Bureaucrat const &);
		Bureaucrat & operator=(Bureaucrat const &);
		~Bureaucrat(void);
		Bureaucrat(std::string name, int grade);
		std::string getName(void) const;
		int getGrade(void) const;
		void incrementGrade(void);
		void decrementGrade(void);
		void signForm(Form & f) const;
		void executeForm(Form const & form) const;
		
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

	private:
		Bureaucrat(void);
		const std::string _name;
		int _grade;

};

std::ostream & operator<<(std::ostream &, Bureaucrat const &);

#endif
