# **************************************************************************** #
#                                                                              #
#                                                         ::::::::             #
#    Makefile                                           :+:    :+:             #
#                                                      +:+                     #
#    By: Peer <pde-bakk@student.codam.nl>             +#+                      #
#                                                    +#+                       #
#    Created: 2020/07/25 17:28:30 by pde-bakk      #+#    #+#                  #
#    Updated: 2020/07/28 17:02:24 by pde-bakk      ########   odam.nl          #
#                                                                              #
# **************************************************************************** #

NAME = replace

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
	rm -f $(NAME)

fclean: clean

re: fclean all

test: re
	./replace testfile std nonstd
