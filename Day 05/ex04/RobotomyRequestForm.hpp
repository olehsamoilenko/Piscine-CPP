/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RobotomyRequestForm.hpp                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: osamoile <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/01 12:23:47 by osamoile          #+#    #+#             */
/*   Updated: 2019/07/01 12:23:48 by osamoile         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ROBOTOMYREQUESTFORM_HPP
# define ROBOTOMYREQUESTFORM_HPP

class Form;

class RobotomyRequestForm : public Form
{
	public:
		RobotomyRequestForm(RobotomyRequestForm const &);
		RobotomyRequestForm & operator=(RobotomyRequestForm const &);
		~RobotomyRequestForm(void);

		RobotomyRequestForm(std::string target);
		void execute(Bureaucrat const & executor) const;

	private:
		RobotomyRequestForm(void);
};

#endif
