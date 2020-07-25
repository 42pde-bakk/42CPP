# **************************************************************************** #
#                                                                              #
#                                                         ::::::::             #
#    Makefile                                           :+:    :+:             #
#                                                      +:+                     #
#    By: pde-bakk <pde-bakk@student.codam.nl>         +#+                      #
#                                                    +#+                       #
#    Created: 2020/07/25 17:28:30 by pde-bakk      #+#    #+#                  #
#    Updated: 2020/07/25 23:09:47 by pde-bakk      ########   odam.nl          #
#                                                                              #
# **************************************************************************** #

NAME = phonebook

CC = clang++
FLAGS = -Wall -Wextra -Werror -pedantic -std=c++98

FILES = main.cpp Phonebook.Class.cpp Contact.Class.cpp

all: $(NAME)

$(NAME):
	$(CC) $(FILES) $(FLAGS) -o $(NAME)

clean:
	rm -f $(NAME)

fclean: clean

re: fclean all