/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Array.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: osamoile <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/01 12:23:47 by osamoile          #+#    #+#             */
/*   Updated: 2019/07/01 12:23:48 by osamoile         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ARRAY_HPP
# define ARRAY_HPP

# include <iostream>

template <typename T>
class Array
{
	public:
		Array<T>(void)
		{
			_size = 0;
			_array = new T[_size];
		}

		Array<T>(unsigned int n)
		{
			_size = n;
			_array = new T[_size];
		}

		unsigned int size(void) const
		{
			return (_size);
		}

		T & operator[](unsigned int n)
		{
			if (n > _size)
				throw (std::out_of_range("std::out_of_range"));
			return (_array[n]);
		}

		Array<T>(Array<T> const & src)
		{
			*this = src;
		}

		Array<T> & operator=(Array<T> const & src)
		{
			_size = src._size;
			_array = new T[_size];
			for (unsigned int i = 0; i < _size; i++)
				_array[i] = src._array[i];
			return (*this);
		}

		~Array<T>(void)
		{
			delete [] _array;
		}

	private:
		T * _array;
		unsigned int _size;
};

#endif
