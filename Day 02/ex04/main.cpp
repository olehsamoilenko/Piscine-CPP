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
// #include <sstream>



int		main(int argc, char **argv)
{
	//           .123456789.123456789.123456789.123456789.
	// std::string expr = "(1 - 2) / 2 * 3 + 2 * (1 + 5) + (2 - 1)"

	if (argc == 2)
	{
		Parser eval(argv[1]);
		std::cout << "RES: " << eval.getValue() << std::endl;

	}

	
	// system("leaks eval_expr");

	return (0);
}
