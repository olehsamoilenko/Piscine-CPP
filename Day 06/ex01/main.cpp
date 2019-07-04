/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: osamoile <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/03 13:08:44 by osamoile          #+#    #+#             */
/*   Updated: 2019/07/03 13:08:46 by osamoile         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

struct Data
{
	std::string s1;
	int n;
	std::string s2;
};

void *	serialize(void)
{
	char * data = new char[20];
	const std::string alp = "0123456789abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ";

	for (int i = 0; i < 8; i++)
		data[i] = alp[rand() % alp.length()];
	std::cout << "String 1 before serialization:\t"
		<< std::string(data, 8) << std::endl;

	int num = rand();
	std::cout << "Number before serialization:\t" << num << std::endl;
	*(reinterpret_cast<int *>(data + 8)) = num;

	for (int i = 12; i < 20; i++)
		data[i] = alp[rand() % alp.length()];
	std::cout << "String 2 before serialization:\t"
		<< std::string(data + 12, 8) << std::endl;

	return (reinterpret_cast<void *>(data));
}

Data *	deserialize(void * raw)
{
	Data * data = new Data();
	char * tmp = reinterpret_cast<char *>(raw);
	data->s1 = std::string(tmp, 8);
	data->n = *(reinterpret_cast<int *>(tmp + 8));
	data->s2 = std::string(tmp + 12, 8);
	return (data);
}

int		main(void)
{
	srand(clock());
	Data * data = deserialize(serialize());
	std::cout << "String 1 after serialization:\t" << data->s1 << std::endl;
	std::cout << "Number after serialization:\t" << data->n << std::endl;
	std::cout << "String 2 after serialization:\t" << data->s2 << std::endl;
	return (0);
}
