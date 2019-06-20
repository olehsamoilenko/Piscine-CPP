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

class Fixed
{
	public:
		Fixed(void);
		Fixed & operator=(Fixed const & src);
		Fixed(Fixed const & src);
		~Fixed(void);

		int getRawBits(void) const;
		void setRawBits(int const raw);

	private:
		int					_rawBits;
		static const int	_fractBits;

};

#endif