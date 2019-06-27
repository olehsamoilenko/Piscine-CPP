/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: osamoile <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/06/20 13:28:49 by osamoile          #+#    #+#             */
/*   Updated: 2019/06/20 13:28:51 by osamoile         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

int main( void ) {
	Fixed a;
	Fixed const b( Fixed( 5.05f ) * Fixed( 2 ) );
	std::cout << a << std::endl;
	std::cout << ++a << std::endl;
	std::cout << a << std::endl;
	std::cout << a++ << std::endl;
	std::cout << a << std::endl;
	std::cout << b << std::endl;
	std::cout << Fixed::max( a, b ) << std::endl;

	std::cout << "--------------------------" << std::endl;

	Fixed c(3);
	Fixed d(4.1f);

	std::cout << c + d << std::endl;
	std::cout << d - c << std::endl;
	std::cout << d / c << std::endl;
	std::cout << (c > d) << std::endl;
	std::cout << (c < d) << std::endl;
	std::cout << (c >= d) << std::endl;
	std::cout << (c <= d) << std::endl;
	std::cout << (c == d) << std::endl;
	std::cout << (c != d) << std::endl;

	std::cout << Fixed::max( c, d ) << std::endl;
	std::cout << Fixed::min( c, d ) << std::endl;

	std::cout << "--------------------------" << std::endl;

	std::cout << Fixed(0.1f) << std::endl;
	std::cout << Fixed(0.01f) << std::endl;
	std::cout << Fixed(0.001f) << std::endl;
	std::cout << Fixed(0.0001f) << std::endl;
	std::cout << Fixed(0.10f) << std::endl;
	std::cout << Fixed(0.10129859825983f) << std::endl;
	std::cout << Fixed(0.101298598259831f) << std::endl;
	
	return 0;
}
