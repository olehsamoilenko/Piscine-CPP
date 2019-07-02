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

#include "CentralBureaucracy.hpp"

const std::string names[] = {
	"Artem",
	"Borys",
	"Carl",
	"Denis",
	"Elran",
	"Frank",
	"Georgy",
	"Hleb",
	"Ilya",
	"Jack"
};

int		main(void)
{
	{
		CentralBureaucracy cb;
		/* feed into center */
		try
		{
			for (int i = 0; i < 20; i++)
				cb.feed(*(new Bureaucrat(names[rand() % 9], rand() % 150 + 1)));		
		}
		catch (CentralBureaucracy::CenterIsFullException & e)
		{
			std::cout << e.what() << std::endl;
		}
		/* queue targets */
		try
		{
			for (int i = 0; i < 20; i++)
				cb.queueUp(names[rand() % 9]);
		}
		catch (CentralBureaucracy::QueueFullException & e)
		{
			std::cout << e.what() << std::endl;
		}
		cb.doBureuacracy();
		std::cout << std::string(70, '-') << std::endl;
	}

	{
		CentralBureaucracy cb;
		/* feed into center */
		try
		{
			for (int i = 0; i < 50; i++)
				cb.feed(*(new Bureaucrat(names[rand() % 9], rand() % 150 + 1)));		
		}
		catch (CentralBureaucracy::CenterIsFullException & e)
		{
			std::cout << e.what() << std::endl;
		}
		/* queue targets */
		try
		{
			for (int i = 0; i < 100; i++)
				cb.queueUp(names[rand() % 9]);
		}
		catch (CentralBureaucracy::QueueFullException & e)
		{
			std::cout << e.what() << std::endl;
		}
		cb.doBureuacracy();
	}

	return (0);
}