# **************************************************************************** #
#                                                                              #
#                                                         ::::::::             #
#    Makefile                                           :+:    :+:             #
#                                                      +:+                     #
#    By: Peer <pde-bakk@student.codam.nl>             +#+                      #
#                                                    +#+                       #
#    Created: 2020/07/25 17:28:30 by pde-bakk      #+#    #+#                  #
#    Updated: 2020/08/03 16:35:27 by pde-bakk      ########   odam.nl          #
#                                                                              #
# **************************************************************************** #

NAME = fire

ifeq ($(shell uname), Linux)
 CXX = g++
else
 CXX = clang++
endif
FLAGS = -Wall -Wextra -Werror -pedantic -std=c++98

FILES = main.cpp AWeapon.cpp PlasmaRifle.cpp PowerFist.cpp \
	Enemy.cpp SuperMutant.cpp RadScorpion.cpp \
	Character.cpp

all: $(NAME)

$(NAME):
	$(CXX) $(FILES) $(FLAGS) -o $(NAME).out

clean:
	rm -f $(NAME).out

fclean: clean

re: fclean all

