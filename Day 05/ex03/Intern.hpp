/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Intern.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: osamoile <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/01 12:23:47 by osamoile          #+#    #+#             */
/*   Updated: 2019/07/01 12:23:48 by osamoile         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef INTERN_HPP
# define INTERN_HPP

# include <iostream>

class Form;

class Intern
{
	public:
		Intern(void);
		Intern(Intern const &);
		Intern & operator=(Intern const &);
		~Intern(void);
		Form * makeForm(std::string formName, std::string target) const;

	private:
		Form * _shurubberyCreation(std::string target) const;
		Form * _robotomyRequest(std::string target) const;
		Form * _presidentialPardon(std::string target) const;

		class UnknownFormException : public std::exception
		{
			public:
				UnknownFormException(void);
				UnknownFormException(std::string msg);
				UnknownFormException(UnknownFormException const &);
				UnknownFormException & operator=(UnknownFormException const &);
				virtual ~UnknownFormException(void) throw();
				virtual const char * what() const throw();

			private:
				std::string _msg;
		};
};

#endif
