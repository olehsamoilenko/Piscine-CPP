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

#include "Intern.hpp"
#include "Form.hpp"

int		main(void)
{
	Intern someRandomIntern;
	try
	{
		Form * f1 = someRandomIntern.makeForm("robotomy request", "Bender");
		Form * f2 = someRandomIntern.makeForm("shrubbery creation", "Dender");
		Form * f3 = someRandomIntern.makeForm("presidential pardon", "Fender");
		Form * f4 = someRandomIntern.makeForm("cool form", "Fender");
		delete f1;
		delete f2;
		delete f3;
		delete f4;
	}
	catch(std::exception & e)
	{
		std::cout << e.what() << std::endl;
	}
	return (0);
}
