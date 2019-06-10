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
CFLAGS = #-Wall -Werror -Wextra
CPP =	main \
		Book \
		Contact

HPP =	Book \
		Contact

INC = -I includes

HEADER = $(addsuffix .hpp, $(addprefix includes/, $(HPP)))
OBJ = $(addsuffix .o, $(addprefix obj/, $(CPP)))

all: $(NAME)

obj/%.o: src/%.cpp $(HEADER)
	$(CC) -c $< -o $@ $(INC) $(CFLAGS)

$(NAME): obj $(OBJ)
	$(CC) $(OBJ) -o $(NAME)

obj:
	mkdir obj

clean:
	rm -rf obj

fclean: clean
	rm -f $(NAME)

re: fclean all
