/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   mutantstack.hpp                                    :+:    :+:            */
/*                                                     +:+                    */
/*   By: pde-bakk <pde-bakk@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/08/15 00:07:51 by pde-bakk      #+#    #+#                 */
/*   Updated: 2020/10/02 13:20:35 by peerdb        ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#ifndef MUTANTSTACK_HPP
#define MUTANTSTACK_HPP
#include <stack>
#include <iterator>
#include <deque>

// https://en.cppreference.com/w/cpp/container/stack

template < class T, class Container = std::deque<T> >
class MutantStack : public std::stack<T, Container> {
public:
	MutantStack() : std::stack<T,Container>() {}
	~MutantStack() {}
	MutantStack(const MutantStack<T, Container> &other) : std::stack<T,Container>() {
		*this = other;
	}
	MutantStack&	operator=(const MutantStack& x) {
		if (this != &x)
			this->c = x.c;
		return *this;
	}

	typedef typename std::stack<T, Container>::container_type::iterator iterator;
	typedef typename std::stack<T, Container>::container_type::const_iterator const_iterator;
	typedef typename std::stack<T, Container>::container_type::reverse_iterator reverse_iterator;
	typedef typename std::stack<T, Container>::container_type::const_reverse_iterator const_reverse_iterator;
	
	iterator begin() {
		return this->c.begin();
	}
	iterator end() {
		return this->c.end();
	}
	const_iterator begin() const {
		return this->c.begin();
	}
	const_iterator end() const {
		return this->c.end();
	}
	reverse_iterator rbegin() {
		return this->c.rbegin();
	}
	reverse_iterator rend() {
		return this->c.rend();
	}
	const_reverse_iterator rbegin() const {
		return this->c.rbegin();
	}
	const_reverse_iterator rend() const {
		return this->c.rend();
	}
};

#endif
