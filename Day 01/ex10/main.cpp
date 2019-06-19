/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: osamoile <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/06/19 16:47:08 by osamoile          #+#    #+#             */
/*   Updated: 2019/06/19 16:47:09 by osamoile         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <fstream>

void	readFromFile(std::string filename)
{
	std::ifstream	ifs(filename);
	
}

int		main(int argc, char ** argv)
{
	if (argc == 2)
	{
		readFromFile(argv[1]);


	}
}
