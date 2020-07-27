# **************************************************************************** #
#                                                                              #
#                                                         ::::::::             #
#    Makefile                                           :+:    :+:             #
#                                                      +:+                     #
#    By: Peer <pde-bakk@student.codam.nl>             +#+                      #
#                                                    +#+                       #
#    Created: 2020/07/25 17:28:30 by pde-bakk      #+#    #+#                  #
#    Updated: 2020/07/27 19:24:46 by Peer          ########   odam.nl          #
#                                                                              #
# **************************************************************************** #

NAME = zombie

ifeq ($(shell uname), Linux)
 CXX = g++
else
 CXX = clang++
endif
FLAGS = -Wall -Wextra -Werror -pedantic -std=c++98

FILES = main.cpp Zombie.cpp ZombieEvent.cpp

all: $(NAME)

$(NAME):
	$(CXX) $(FILES) $(FLAGS) -o $(NAME).out

clean:
	rm -f $(NAME)

fclean: clean

re: fclean all
