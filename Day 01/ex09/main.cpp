/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: osamoile <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/06/19 15:44:33 by osamoile          #+#    #+#             */
/*   Updated: 2019/06/19 15:44:35 by osamoile         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Logger.hpp"

int		main(void)
{
	Logger l1("file.log");

	l1.log("file", "hello");
	l1.log("file", " ");
	l1.log("file", "i'm alive");

	Logger l2("file.log");

	l2.log("file", "we are alive");
	l2.log("file", "making this together:)");

	l1.log("console", "and on console too");
	l1.log("console", "it's right now!");
	l1.log("console", "<-- it's right now!");

	l1.log("notepad", "note:(");
	return (0);
}