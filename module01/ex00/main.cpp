/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   main.cpp                                           :+:    :+:            */
/*                                                     +:+                    */
/*   By: Peer <pde-bakk@student.codam.nl>             +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/07/27 12:53:36 by pde-bakk      #+#    #+#                 */
/*   Updated: 2020/07/28 15:33:07 by pde-bakk      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "Pony.hpp"

void	ponyOnTheStack()
{
	Pony	bob = Pony(80, 2, "black", "Robert Haslam");
	bob.displayPonyinfo();
}

void	PonyOnTheHeap()
{
	Pony	*jim = new Pony(150, 4, "white", "Jimothy");
	if (jim == NULL) {
		std::cout << "Failed to allocate a pony on the heap" << std::endl;
		return ;
	}
	jim->displayPonyinfo();
	delete jim;
}

int		main(void) {
	ponyOnTheStack();
	PonyOnTheHeap();

	system("leaks ponies.out");
	return 0;
}
