/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: osamoile <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/06/24 18:11:21 by osamoile          #+#    #+#             */
/*   Updated: 2019/06/24 18:11:23 by osamoile         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Parser.hpp"

int		main(int argc, char **argv)
{
	if (argc == 2)
	{
		Parser eval(argv[1]);
		std::cout << "Result: " << eval.getValue().toFloat() << std::endl;
	}
	else
		std::cout << "Usage: ./eval_expr 'expression'" << std::endl;
	return (0);
}
