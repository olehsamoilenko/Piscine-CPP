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
	/* constructors ko */
	try {
		Form f("First Intership", 0, 50);
	}
	catch (std::exception & e) {
		std::cout << e.what() << std::endl;
	}
	try {
		Form f("First Intership", 151, 50);
	}
	catch (std::exception & e) {
		std::cout << e.what() << std::endl;
	}
	try {
		Form f("First Intership", 50, 0);
	}
	catch (std::exception & e) {
		std::cout << e.what() << std::endl;
	}
	try {
		Form f("First Intership", 50, 151);
	}
	catch (std::exception & e) {
		std::cout << e.what() << std::endl;
	}
	std::cout << std::string(70, '-') << std::endl;

	/* grade for signing */
	Form f("First Intership", 50, 70);
	Bureaucrat b1("Oleh", 40);
	Bureaucrat b2("Vadim", 60);
	b1.signForm(f);
	b2.signForm(f);

	return (0);
}
