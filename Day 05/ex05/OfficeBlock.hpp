/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   OfficeBlock.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: osamoile <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/01 12:23:47 by osamoile          #+#    #+#             */
/*   Updated: 2019/07/01 12:23:48 by osamoile         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef OfficeBlock_HPP
# define OfficeBlock_HPP

# include <iostream>
# include "Intern.hpp"
# include "Bureaucrat.hpp"

class OfficeBlock
{
	public:
		OfficeBlock(void);
		OfficeBlock(Intern * i, Bureaucrat * s, Bureaucrat * e);
		~OfficeBlock(void);
		void doBureaucracy(std::string formName, std::string target);

		void setIntern(Intern & intern);
		void setSigner(Bureaucrat & signer);
		void setExecutor(Bureaucrat & executor);

		class InternNotSetException : public std::exception
		{
			public:
				InternNotSetException(void);
				InternNotSetException(std::string msg);
				InternNotSetException(InternNotSetException const &);
				InternNotSetException & operator=(InternNotSetException const &);
				virtual ~InternNotSetException(void) throw();
				virtual const char * what() const throw();

			private:
				std::string _msg;
		};

		class SignerNotSetException : public std::exception
		{
			public:
				SignerNotSetException(void);
				SignerNotSetException(std::string msg);
				SignerNotSetException(SignerNotSetException const &);
				SignerNotSetException & operator=(SignerNotSetException const &);
				virtual ~SignerNotSetException(void) throw();
				virtual const char * what() const throw();

			private:
				std::string _msg;
		};

		class ExecutorNotSetException : public std::exception
		{
			public:
				ExecutorNotSetException(void);
				ExecutorNotSetException(std::string msg);
				ExecutorNotSetException(ExecutorNotSetException const &);
				ExecutorNotSetException & operator=(ExecutorNotSetException const &);
				virtual ~ExecutorNotSetException(void) throw();
				virtual const char * what() const throw();

			private:
				std::string _msg;
		};

		class InternAlreadySetException : public std::exception
		{
			public:
				InternAlreadySetException(void);
				InternAlreadySetException(std::string msg);
				InternAlreadySetException(InternAlreadySetException const &);
				InternAlreadySetException & operator=(InternAlreadySetException const &);
				virtual ~InternAlreadySetException(void) throw();
				virtual const char * what() const throw();

			private:
				std::string _msg;
		};

		class SignerAlreadySetException : public std::exception
		{
			public:
				SignerAlreadySetException(void);
				SignerAlreadySetException(std::string msg);
				SignerAlreadySetException(SignerAlreadySetException const &);
				SignerAlreadySetException & operator=(SignerAlreadySetException const &);
				virtual ~SignerAlreadySetException(void) throw();
				virtual const char * what() const throw();

			private:
				std::string _msg;
		};

		class ExecuterAlreadySetException : public std::exception
		{
			public:
				ExecuterAlreadySetException(void);
				ExecuterAlreadySetException(std::string msg);
				ExecuterAlreadySetException(ExecuterAlreadySetException const &);
				ExecuterAlreadySetException & operator=(ExecuterAlreadySetException const &);
				virtual ~ExecuterAlreadySetException(void) throw();
				virtual const char * what() const throw();

			private:
				std::string _msg;
		};

	private:
		OfficeBlock(OfficeBlock const &);
		OfficeBlock & operator=(OfficeBlock const &);

		Intern * _intern;
		Bureaucrat * _signer;
		Bureaucrat * _executor;

};

#endif
