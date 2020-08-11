# **************************************************************************** #
#                                                                              #
#                                                         ::::::::             #
#    Makefile                                           :+:    :+:             #
#                                                      +:+                     #
#    By: Peer <pde-bakk@student.codam.nl>             +#+                      #
#                                                    +#+                       #
#    Created: 2020/07/25 17:28:30 by pde-bakk      #+#    #+#                  #
#    Updated: 2020/08/11 23:51:29 by peer          ########   odam.nl          #
#                                                                              #
# **************************************************************************** #

NAME = identify.out

ifeq ($(shell uname), Linux)
 CXX = g++
else
 CXX = clang++
endif
FLAGS = -Wall -Wextra -Werror -pedantic -std=c++98

FILES = main.cpp

all: $(NAME)

$(NAME):
	$(CXX) $(FILES) $(FLAGS) -o $(NAME)
	
clean:

fclean: clean
	rm -f $(NAME)

re: fclean all

