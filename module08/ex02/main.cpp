/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   main.cpp                                           :+:    :+:            */
/*                                                     +:+                    */
/*   By: pde-bakk <pde-bakk@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/08/15 00:11:48 by pde-bakk      #+#    #+#                 */
/*   Updated: 2020/08/16 22:25:54 by peer          ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "mutantstack.hpp"
#include <iostream>

int subject_test()
{
	MutantStack<int> mstack;
	mstack.push(5);
	mstack.push(17);
	std::cout << mstack.top() << std::endl;
	mstack.pop();
	std::cout << mstack.size() << std::endl;
	mstack.push(3);
	mstack.push(5);
	mstack.push(737);
	//[...]
	mstack.push(0);
	MutantStack<int>::iterator it = mstack.begin();
	MutantStack<int>::iterator ite = mstack.end();
	++it;
	--it;
	while (it != ite)
	{
		std::cout << *it << std::endl;
		++it;
	}
	std::stack<int> s(mstack);
	return 0;
}

int peer_test()
{
	MutantStack<float> Peer;
	Peer.push(5.2);
	Peer.push(17.3);
	Peer.push(3.1);
	Peer.push(5.8);
	Peer.push(737.0);
	Peer.push(0.1);
	MutantStack<float> Peer2(Peer);
	MutantStack<float> Peer3;
	Peer3 = Peer;
	MutantStack<float>::const_iterator it = Peer3.begin();
	MutantStack<float>::const_iterator ite = Peer3.end();
	while (it != ite) {
		std::cout << *it << std::endl;
		it++;
	}
	it -= Peer3.size();
	// it -= Peer.end() - Peer.begin();
	std::cout << *it << std::endl;

	std::cout << std::endl;
	MutantStack<float>::reverse_iterator revit = Peer2.rbegin();
	MutantStack<float>::reverse_iterator revite = Peer2.rend();
	try {
		*revit = 87.2;
		std::cout << "revit is modifiable!" << std::endl;
	}
	catch (std::exception& e) {
		std::cout << "revit is not modifiable, because " << e.what() << std::endl;
	}
	while (revit != revite) {
		std::cout << *revit << std::endl;
		revit++;
	}
	std::cout << std::endl;
	MutantStack<float>::const_reverse_iterator crevit = Peer.rbegin();
	MutantStack<float>::const_reverse_iterator crevite = Peer.rend();
	// 	*crevit = 87.2; //to show that crevit is const
	while (crevit != crevite) {
		std::cout << *crevit << std::endl;
		crevit++;
	}
	return 0;
}

int	main(void) {
	// subject_test();
	peer_test();
}
