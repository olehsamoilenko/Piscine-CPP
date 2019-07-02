/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PresidentialPardonForm.cpp                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: osamoile <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/01 12:23:41 by osamoile          #+#    #+#             */
/*   Updated: 2019/07/01 12:23:43 by osamoile         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"
#include "PresidentialPardonForm.hpp"
#include <fstream>

PresidentialPardonForm::PresidentialPardonForm(std::string target)
	: Form("Presidential Pardon Form", 25, 5, target)
{

}

void PresidentialPardonForm::execute(Bureaucrat const & executor) const
{
	Form::execute(executor);
	std::cout << "<" << getTarget() <<
		"> has been pardoned by Zaphod Beeblebrox" << std::endl;
}

PresidentialPardonForm::PresidentialPardonForm(void)
{

}

PresidentialPardonForm::PresidentialPardonForm(PresidentialPardonForm const & src)
	: Form(src.getName(), src.getGradeRequiredSign(), src.getGradeRequiredExec())
{
	*this = src;
}

PresidentialPardonForm & PresidentialPardonForm::
	operator=(PresidentialPardonForm const & src)
{
	if (this != &src)
	{

	}
	return (*this);
}

PresidentialPardonForm::~PresidentialPardonForm(void)
{
	
}
