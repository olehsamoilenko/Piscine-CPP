/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RobotomyRequestForm.cpp                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: osamoile <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/01 12:23:41 by osamoile          #+#    #+#             */
/*   Updated: 2019/07/01 12:23:43 by osamoile         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"
#include "RobotomyRequestForm.hpp"

RobotomyRequestForm::RobotomyRequestForm(std::string target)
	: Form("RobotomyRequestForm", 72, 45, target)
{

}

void RobotomyRequestForm::execute(Bureaucrat const & executor) const
{
	Form::execute(executor);
	srand(clock());
	std::cout << "* makes some drilling noises *" << std::endl;
	if (rand() % 2)
		std::cout << "<" << getTarget() <<
			"> has been robotomized successfully" << std::endl;
	else
		std::cout << "<" << getTarget() <<
			"> robotomize failed" << std::endl;
}

RobotomyRequestForm::RobotomyRequestForm(void)
{

}

RobotomyRequestForm::RobotomyRequestForm(RobotomyRequestForm const & src)
	: Form(src.getName(), src.getGradeRequiredSign(), src.getGradeRequiredExec())
{
	*this = src;
}

RobotomyRequestForm & RobotomyRequestForm::
	operator=(RobotomyRequestForm const & src)
{
	if (this != &src)
	{

	}
	return (*this);
}

RobotomyRequestForm::~RobotomyRequestForm(void)
{
	
}
