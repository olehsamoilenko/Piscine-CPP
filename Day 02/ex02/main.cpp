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
	
	return 0;
}
