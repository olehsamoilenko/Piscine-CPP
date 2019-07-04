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
#include "Base.hpp"
#include "A.hpp"
#include "B.hpp"
#include "C.hpp"

class D : public Base
{

};

Base *	generate(void)
{
	switch (rand() % 3)
	{
		case 0:
			return (new A());
			break ;
		case 1:
			return (new B());
			break ;
		case 2:
			return (new C());
			break ;
		default:
			return (NULL);
	}
}

void	identify_from_pointer(Base * p)
{
	if (dynamic_cast<A *>(p))
		std::cout << "A" << std::endl;
	else if (dynamic_cast<B *>(p))
		std::cout << "B" << std::endl;
	else if (dynamic_cast<C *>(p))
		std::cout << "C" << std::endl;
	else
		std::cout << "Unknown" << std::endl;
}

void	identify_from_reference(Base & p)
{
	if (dynamic_cast<A *>(&p))
		std::cout << "A" << std::endl;
	else if (dynamic_cast<B *>(&p))
		std::cout << "B" << std::endl;
	else if (dynamic_cast<C *>(&p))
		std::cout << "C" << std::endl;
	else
		std::cout << "Unknown" << std::endl;
}

int		main(void)
{
	srand(clock());
	A * a = new A();
	B * b = new B();
	C * c = new C();
	Base * base = new Base();
	D * d = new D();
	identify_from_pointer(a); 
	identify_from_pointer(b);
	identify_from_pointer(c);
	identify_from_pointer(base);
	identify_from_pointer(d);
	std::cout << std::string(20, '-') << std::endl;

	identify_from_reference(*a);
	identify_from_reference(*b);
	identify_from_reference(*c);
	identify_from_reference(*base);
	identify_from_reference(*d);
	std::cout << std::string(20, '-') << std::endl;
	
	for (int i = 0; i < 10; i++)
	{
		Base * tmp = generate();
		std::cout << "Pointer: ";
		identify_from_pointer(tmp);
		std::cout << "Reference: ";
		identify_from_reference(*tmp);
	}
	return (0);
}
