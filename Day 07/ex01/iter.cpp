/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   iter.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: osamoile <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/04 17:31:20 by osamoile          #+#    #+#             */
/*   Updated: 2019/07/04 17:31:21 by osamoile         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

template <typename T>
void	iter(T * address, int length, void (*func)(T & elem))
{
	for (int i = 0; i < length; i++)
		func(address[i]);
}

template <typename T>
void	print(T & elem)
{
	std::cout << elem << " ";
}

template <typename T>
void	increment(T & elem)
{
	elem++;
}

int		main(void)
{
	int arr1[] = {1, 3, 5, 7, 9};
	std::cout << "Int array <print>" << std::endl;
	iter(arr1, 5, print);
	std::cout << std::endl;
	std::cout << "Int array <increment>" << std::endl;
	iter(arr1, 5, increment);
	std::cout << "Int array <print>" << std::endl;
	iter(arr1, 5, print);
	std::cout << std::endl;

	std::string arr2[] = {"hey", "i", "am", "oleh"};
	std::cout << "String array <print>" << std::endl;
	iter(arr2, 5, print);
	std::cout << std::endl;

	srand(clock());
	double * arr3 = new double[5];
	for (int i = 0; i < 5; i++)
		arr3[i] = rand() % 100 + rand() % 10 / (double)10;
	std::cout << "Double array <print>" << std::endl;
	iter(arr3, 5, print);
	std::cout << std::endl;
	std::cout << "Double array <increment>" << std::endl;
	iter(arr3, 5, increment);
	std::cout << "Double array <print>" << std::endl;
	iter(arr3, 5, print);
	std::cout << std::endl;
	
	return 0;
}