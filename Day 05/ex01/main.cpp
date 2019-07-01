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

#include "Form.hpp"
#include "Bureaucrat.hpp"

int		main(void)
{
	/* constructor exceptions */
	try {
		Form f1("First Intership", 1, 50);
		std::cout << f1;
		Form f2("First Intership", 0, 50);
	}
	catch (std::exception & e) {
		std::cout << e.what() << std::endl;
	}

	std::cout << "---------------------------------------------------------" << std::endl;

	/* low grade for signing */
	try {
		Form f("First Intership", 50, 70);
		Bureaucrat b1("Oleh", 40);
		Bureaucrat b2("Vadim", 60);
		b1.signForm(f);
		f.beSigned(b1);
		b2.signForm(f);
		f.beSigned(b2);
	}
	catch (std::exception & e) {
		std::cout << e.what() << std::endl;
	}


	return (0);
}
