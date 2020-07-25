# **************************************************************************** #
#                                                                              #
#                                                         ::::::::             #
#    Makefile                                           :+:    :+:             #
#                                                      +:+                     #
#    By: pde-bakk <pde-bakk@student.codam.nl>         +#+                      #
#                                                    +#+                       #
#    Created: 2020/07/25 17:28:30 by pde-bakk      #+#    #+#                  #
#    Updated: 2020/07/25 17:37:12 by pde-bakk      ########   odam.nl          #
#                                                                              #
# **************************************************************************** #

NAME = megaphone

CC = clang++
FLAGS = -Wall -Wextra -Werror -pedantic -std=c++98
#I think -std=c++03 also works

all: $(NAME)

$(NAME):
	$(CC) megaphone.cpp $(FLAGS) -o $(NAME)

clean:
	rm -f $(NAME)

fclean: clean

re: fclean all