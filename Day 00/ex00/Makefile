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

NAME = megaphone
CC = clang++
CFLAGS = -Wall -Werror -Wextra
LIST = megaphone
OBJ = $(addprefix $(LIST), .o)

%.o: %.cpp
	$(CC) -c $< -o $@ $(CFLAGS)

all: $(NAME)

$(NAME): $(OBJ)
	$(CC) $(OBJ) -o $(NAME)

clean:
	rm $(OBJ)

fclean: clean
	rm $(NAME)

re: fclean all
