/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ShrubberyCreationForm.hpp                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: osamoile <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/01 12:23:47 by osamoile          #+#    #+#             */
/*   Updated: 2019/07/01 12:23:48 by osamoile         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SHRUBBERYCREATIONFORM_HPP
# define SHRUBBERYCREATIONFORM_HPP

class Form;

class ShrubberyCreationForm : public Form
{
	public:
		ShrubberyCreationForm(ShrubberyCreationForm const &);
		ShrubberyCreationForm & operator=(ShrubberyCreationForm const &);
		~ShrubberyCreationForm(void);

		ShrubberyCreationForm(std::string target);
		void execute(Bureaucrat const & executor) const;

	private:
		ShrubberyCreationForm(void);
};

#endif
