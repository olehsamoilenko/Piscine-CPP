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

int		main(void)
{
	/* low grade */
	try {
		Bureaucrat b("Oleh", 0);
	}
	catch (std::exception & e) {
		std::cerr << e.what() << std::endl;
	}

	/* high grade */
	try {
		Bureaucrat b("Oleh", 151);
	}
	catch (std::exception & e) {
		std::cerr << e.what() << std::endl;
	}

	/* incorrect increment */
	try {
		Bureaucrat b("Oleh", 1);
		std::cerr << b;
		b.incrementGrade();
	}
	catch (std::exception & e) {
		std::cerr << e.what() << std::endl;
	}

	/* incorrect decrement */
	try {
		Bureaucrat b("Oleh", 150);
		std::cerr << b;
		b.decrementGrade();
	}
	catch (std::exception & e) {
		std::cerr << e.what() << std::endl;
	}

	return (0);
}
