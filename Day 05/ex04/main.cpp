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
#include "Bureaucrat.hpp"
#include "OfficeBlock.hpp"

void	funcTry(OfficeBlock & ob)
{
	try
	{
		ob.doBureaucracy("robotomy request", "Pigley");
	}
	catch (std::exception & e)
	{
		std::cout << "! Exception: " << e.what() << " !" << std::endl;
	}
	std::cout << std::string(70, '-') << std::endl;
}

int		main()
{
	Intern idiotOne;
	Bureaucrat exec = Bureaucrat("Hermes Conrad", 46);
	Bureaucrat sign = Bureaucrat("Bobby Bobson", 73);
	OfficeBlock ob;

	/* members not set */
	funcTry(ob);
	ob.setIntern(idiotOne);
	funcTry(ob);
	ob.setSigner(sign);
	funcTry(ob);
	ob.setExecutor(exec);
	funcTry(ob);

	/* double set */
	try { ob.setIntern(idiotOne); }
	catch (std::exception & e) { std::cout << "! Exception: " << e.what() << " !" << std::endl; }
	std::cout << std::string(70, '-') << std::endl;
	try { ob.setSigner(sign); }
	catch (std::exception & e) { std::cout << "! Exception: " << e.what() << " !" << std::endl; }
	std::cout << std::string(70, '-') << std::endl;
	try { ob.setExecutor(exec); }
	catch (std::exception & e) { std::cout << "! Exception: " << e.what() << " !" << std::endl; }

	/* not enough grade */
	sign.incrementGrade();
	funcTry(ob);
	exec.incrementGrade();

	/* success */
	funcTry(ob);

	return (0);
}