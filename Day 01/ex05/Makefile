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

NAME = brain
CC = clang++
CFLAGS = -Wall -Werror -Wextra
LIST =	Brain \
		Human
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
	rm -rf $(OBJ)

fclean: clean
	rm -f $(NAME)

re: fclean all
