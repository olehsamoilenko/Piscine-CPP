/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Parser.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: osamoile <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/06/24 19:37:30 by osamoile          #+#    #+#             */
/*   Updated: 2019/06/24 19:37:32 by osamoile         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PARSER_HPP
# define PARSER_HPP

# include <iostream>
# include "Fixed.hpp"

class Parser
{
	public:
		Parser(Parser const & src);
		Parser & operator=(Parser const & src);
		~Parser(void);

		Parser(std::string expr);
		Fixed getValue(void) const;

	private:
		Parser(void);

		Fixed _value;
		Parser * _left;
		Parser * _right;
};

#endif
