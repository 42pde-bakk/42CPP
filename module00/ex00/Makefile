# **************************************************************************** #
#                                                                              #
#                                                         ::::::::             #
#    Makefile                                           :+:    :+:             #
#                                                      +:+                     #
#    By: Peer <pde-bakk@student.codam.nl>             +#+                      #
#                                                    +#+                       #
#    Created: 2020/07/25 17:28:30 by pde-bakk      #+#    #+#                  #
#    Updated: 2020/07/26 01:04:33 by Peer          ########   odam.nl          #
#                                                                              #
# **************************************************************************** #

NAME = megaphone

ifeq ($(shell uname), Linux)
 CC = g++
else
 CC = clang++
endif
FLAGS = -Wall -Wextra -Werror -pedantic -std=c++98

all: $(NAME)

$(NAME):
	$(CC) megaphone.cpp $(FLAGS) -o $(NAME)

clean:
	rm -f $(NAME)

fclean: clean

re: fclean all