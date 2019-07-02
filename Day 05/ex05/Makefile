# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: osamoile <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2019/06/13 16:43:13 by osamoile          #+#    #+#              #
#    Updated: 2019/06/13 16:43:14 by osamoile         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME =	bureaucrat
CC =	clang++
CFLAGS = -Wall -Werror -Wextra
CLASS =	Bureaucrat \
		Form \
		ShrubberyCreationForm \
		RobotomyRequestForm \
		PresidentialPardonForm \
		Intern \
		OfficeBlock \
		CentralBureaucracy
IFACE =	
HPP =	$(addsuffix .hpp, $(CLASS) $(IFACE))
OBJ =	$(addsuffix .o, $(CLASS) main)

all: $(NAME)

%.o: %.cpp $(HPP)
	$(CC) -c $< -o $@ $(CFLAGS)

$(NAME): $(OBJ)
	$(CC) $(OBJ) -o $(NAME)

clean:
	rm -rf $(OBJ)

fclean: clean
	rm -f $(NAME)

re: fclean all
