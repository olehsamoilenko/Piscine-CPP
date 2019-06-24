# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: osamoile <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2019/06/10 12:47:56 by osamoile          #+#    #+#              #
#    Updated: 2019/06/10 12:47:58 by osamoile         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = PhoneBook
CC = clang++
CFLAGS = -Wall -Werror -Wextra
LIST =	Book \
		Contact
CPP =	$(LIST) \
		main
HPP =	$(addsuffix .hpp, $(LIST))
OBJ =	$(addsuffix .o, $(CPP))

all: $(NAME)

%.o: %.cpp $(HPP)
	$(CC) -c $< -o $@ $(CFLAGS)

$(NAME): $(OBJ)
	$(CC) $(OBJ) -o $(NAME)

clean:
	rm -f $(OBJ)

fclean: clean
	rm -f $(NAME)

re: fclean all
