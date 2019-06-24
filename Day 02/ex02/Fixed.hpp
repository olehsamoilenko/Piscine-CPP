/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: osamoile <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/06/20 13:28:38 by osamoile          #+#    #+#             */
/*   Updated: 2019/06/20 13:28:40 by osamoile         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FIXED_HPP
# define FIXED_HPP

# include <iostream>

class Fixed
{
	public:
		Fixed(void);
		Fixed(Fixed const & src);
		Fixed(const int n);
		Fixed(const float f);
		~Fixed(void);

		Fixed & operator=(Fixed const & src);

		Fixed operator*(Fixed const & src) const;
		Fixed operator+(Fixed const & src) const;
		Fixed operator-(Fixed const & src) const;
		Fixed operator/(Fixed const & src) const;

		Fixed & operator++(void);
		Fixed operator++(int);
		Fixed & operator--(void);
		Fixed operator--(int);

		bool operator>(Fixed const & src) const;
		bool operator<(Fixed const & src) const;
		bool operator>=(Fixed const & src) const;
		bool operator<=(Fixed const & src) const;
		bool operator==(Fixed const & src) const;
		bool operator!=(Fixed const & src) const;

		int getRawBits(void) const;
		void setRawBits(int const raw);

		float toFloat(void) const;
		int toInt(void) const;

		static Fixed & max(Fixed & val1, Fixed & val2);
		static const Fixed & max(Fixed const & val1, Fixed const & val2);
		static Fixed & min(Fixed & val1, Fixed & val2);
		static const Fixed & min(Fixed const & val1, Fixed const & val2);

	private:
		int					_rawBits;
		static const int	_fractBits;

};

std::ostream & operator<<(std::ostream & o, Fixed const & i);

#endif