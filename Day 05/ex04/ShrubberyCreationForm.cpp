/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ShrubberyCreationForm.cpp                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: osamoile <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/01 12:23:41 by osamoile          #+#    #+#             */
/*   Updated: 2019/07/01 12:23:43 by osamoile         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"
#include "ShrubberyCreationForm.hpp"
#include <fstream>

ShrubberyCreationForm::ShrubberyCreationForm(std::string target)
	: Form("Shrubbery Creation Form", 145, 137, target)
{

}

void ShrubberyCreationForm::execute(Bureaucrat const & executor) const
{
	Form::execute(executor);
	const std::string trees =
		"					,@@@@@@@,\n"
		"	,,,.   ,@@@@@@/@@,  .oo8888o.\n"
		"	,&%%&%&&%,@@@@@/@@@@@@,8888\\88/8o\n"
		",%&\\%&&%&&%,@@@\\@@@/@@@88\\88888/88'\n"
		"%&&%&%&/%&&%@@\\@@/ /@@@88888\\88888'\n"
		"%&&%/ %&%%&&@@\\ V /@@' `88\\8 `/88'\n"
		"`&%\\ ` /%&'    |.|        \\ '|8'\n"
		"	|o|        | |         | |\n"
		"	|.|        | |         | |\n"
		"jgs \\\\/ ._\\//_/__/  ,\\_//__\\\\/.  \\_//__/_\n";
	
	std::ofstream ofs(getTarget() + "_shrubbery");
	ofs << trees << std::endl;
	ofs.close();
}

ShrubberyCreationForm::ShrubberyCreationForm(void)
{

}

ShrubberyCreationForm::ShrubberyCreationForm(ShrubberyCreationForm const & src)
	: Form(src.getName(), src.getGradeRequiredSign(), src.getGradeRequiredExec())
{
	*this = src;
}

ShrubberyCreationForm & ShrubberyCreationForm::
	operator=(ShrubberyCreationForm const & src)
{
	if (this != &src)
	{

	}
	return (*this);
}

ShrubberyCreationForm::~ShrubberyCreationForm(void)
{
	
}
