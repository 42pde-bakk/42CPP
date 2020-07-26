# **************************************************************************** #
#                                                                              #
#                                                         ::::::::             #
#    Makefile                                           :+:    :+:             #
#                                                      +:+                     #
#    By: Peer <pde-bakk@student.codam.nl>             +#+                      #
#                                                    +#+                       #
#    Created: 2020/07/25 17:28:30 by pde-bakk      #+#    #+#                  #
#    Updated: 2020/07/26 02:16:15 by Peer          ########   odam.nl          #
#                                                                              #
# **************************************************************************** #

NAME = phonebook

ifeq ($(shell uname), Linux)
 CC = g++
else
 CC = clang++
endif
FLAGS = -Wall -Wextra -Werror -pedantic -std=c++98

FILES = main.cpp Phonebook.Class.cpp Contact.Class.cpp

all: $(NAME)

$(NAME):
	$(CC) $(FILES) $(FLAGS) -o $(NAME).out

clean:
	rm -f $(NAME)

fclean: clean

re: fclean all