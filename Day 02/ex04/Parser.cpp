/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Parser.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: osamoile <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/06/24 19:37:25 by osamoile          #+#    #+#             */
/*   Updated: 2019/06/24 19:37:27 by osamoile         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Parser.hpp"
#include <sstream>

Parser::~Parser(void)
{

}

Parser & Parser::operator=(Parser const & src)
{
	if (this != &src)
		_value = src._value;
	return (*this);
}

Parser::Parser(Parser const & src)
{
	*this = src;
}

int Parser::getValue(void) const
{
	return (_value);
}

int		opWithoutBracketsPos(std::string expr)
{
	int bracketDepth = 0;
	int posSimple = -1;
	int posMult = -1;
	int i = -1;
	while (++i < expr.length())
	{
		if (expr[i] == '(')
			bracketDepth++;
		else if (expr[i] == ')')
			bracketDepth--;
		else if (bracketDepth == 0)
		{
			if (expr[i] == '-' || expr[i] == '+')
				posSimple = i;
			else if (expr[i] == '*' || expr[i] == '/')
				posMult = i;
		}
	}
	if (posSimple != -1)
		return (posSimple);
	else
		return (posMult);
}

void	removeSpaces(std::string & expr)
{
	std::stringstream ss;
	ss << expr;
	std::string res;
	std::string tmp;
	while (!ss.eof())
	{
		ss >> tmp;
		res += tmp;
	}
	expr = res;
}

bool	removeBrackets(std::string & expr)
{
	if (expr[0] == '(' && expr[expr.length() - 1] == ')')
	{
		expr = expr.substr(1, expr.length() - 2);
		return (true);
	}
	else
		return (false);
}

Parser::Parser(std::string expr)
{
	removeSpaces(expr); // one time ?
	
	int opPos;
	
	while ((opPos = opWithoutBracketsPos(expr)) == -1)
	{
		if (!removeBrackets(expr))
			break ;
	}
	if ((opPos = opWithoutBracketsPos(expr)) != -1)
	{
		char op = expr[opPos];
		// std::cout << "Operation: " << op << std::endl;
		std::string left = expr.substr(0, opPos);
		if (left == "") // negative numbers
			left = "0";
		// std::cout << "LEFT@" << left << "@" << std::endl;
		std::string right = expr.substr(opPos + 1, expr.length() - opPos - 1);
		// std::cout << "RIGHT@" << right << "@" << std::endl;
		_left = new Parser(left);
		_right = new Parser(right);
		std::cout << _left->_value << " " << op << " " << _right->_value << " = ";
		switch (op) // expr[opPos]
		{
			case '+':
				_value = _left->_value + _right->_value;
				break;
			case '-':
				_value = _left->_value - _right->_value;
				break;
			case '*':
				_value = _left->_value * _right->_value;
				break;
			case '/':
				_value = _left->_value / _right->_value;
				break;
			default:
			{
				std::cout << "hui ;(" << std::endl;
				exit (-1);
			}
		}
		std::cout << _value << std::endl;
	}
	else
	{
		int number;
		std::stringstream ss;
		ss << expr;
		if (ss >> number && !ss.fail() && ss.peek() == -1)
		{
			_value = number;
		}
		else
		{
			std::cout << "Incorrect expression :(" << std::endl;
			exit(-1);
		}
	}
}