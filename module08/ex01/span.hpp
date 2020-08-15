/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   span.hpp                                           :+:    :+:            */
/*                                                     +:+                    */
/*   By: pde-bakk <pde-bakk@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/08/14 18:44:49 by pde-bakk      #+#    #+#                 */
/*   Updated: 2020/08/15 17:56:12 by pde-bakk      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#ifndef SPAN_HPP
#define SPAN_HPP
#include <vector>
#include <iostream>

class Span {
public:
	Span(unsigned int N);
	~Span();
	Span(const Span& other);
	Span& operator=(const Span& other);

	void	addNumber(int x);
	template <typename Iter>
	void	addNumber(Iter begin, Iter end) {
		if (std::distance(begin, end) + this->_storage.size() > this->_maxsize)
			throw std::runtime_error("Max size reached");
		this->_storage.insert(this->_storage.end(), begin, end);
	}
	int		shortestSpan() const;
	int		longestSpan() const;
private:
	Span();
	std::vector<int> _storage;
	unsigned int	_maxsize;
};

#endif
