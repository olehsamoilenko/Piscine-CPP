/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: osamoile <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/01 12:23:54 by osamoile          #+#    #+#             */
/*   Updated: 2019/07/01 12:23:55 by osamoile         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"
#include "ShrubberyCreationForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "PresidentialPardonForm.hpp"

int		main(void)
{
	Bureaucrat high("High", 1);
	Bureaucrat low("Low", 150);

	/* ShrubberyCreationForm */
	ShrubberyCreationForm scf("home");
	high.executeForm(scf);
	high.signForm(scf);
	high.executeForm(scf);
	low.executeForm(scf);
	

	/* ShrubberyCreationForm */
	RobotomyRequestForm rrf("factory");
	high.executeForm(rrf);
	high.signForm(rrf);
	for (int i = 0; i < 10; i++)
		high.executeForm(rrf);
	low.executeForm(rrf);
	std::cout << std::string(70, '-') << std::endl;

	/* PresidentialPardonForm */
	PresidentialPardonForm ppf("church");
	high.executeForm(ppf);
	high.signForm(ppf);
	high.executeForm(ppf);
	low.executeForm(ppf);

	return (0);
}
