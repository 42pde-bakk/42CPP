/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   span.cpp                                           :+:    :+:            */
/*                                                     +:+                    */
/*   By: pde-bakk <pde-bakk@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/08/14 19:17:04 by pde-bakk      #+#    #+#                 */
/*   Updated: 2020/08/17 15:27:19 by pde-bakk      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "span.hpp"
#include <iostream>
#include <stdexcept>
#include <algorithm>
#include <climits>

Span::Span(unsigned int N) : _maxsize(N) {
	
}

Span::~Span() {}

Span::Span(const Span& other) {
	*this = other;
}

Span& Span::operator=(const Span& other) {
	if (this != &other) {
		this->_maxsize = other._maxsize;
		this->_storage = other._storage;
	}
	return *this;
}

void	Span::addNumber(int x) {
	if (this->_storage.size() >= this->_maxsize )
		throw std::runtime_error("Max size reached");
	this->_storage.push_back(x);
}

int		Span::shortestSpan() const {
	int span = INT_MAX;
	int diff;
	if (this->_storage.size() <= 1)
		throw std::runtime_error("too few numbers stored");
	std::vector<int> tmp(_storage.size());
	std::copy(_storage.begin(), _storage.end(), tmp.begin());
	std::sort(tmp.begin(), tmp.end());
	for (int i = 1; tmp[i]; i++) {
		diff = tmp[i] - tmp[i - 1];
		if (diff && diff < span)
			span = diff;
	}
	if (span == INT_MAX)
		throw std::runtime_error("no span found");
	return span;
}

int		Span::longestSpan() const {
	if (this->_storage.size() <= 1)
		throw std::runtime_error("too few numbers stored");
	int span =	*std::max_element(_storage.begin(), _storage.end())
		-	*std::min_element(_storage.begin(), _storage.end());
	if (!span)
		throw std::runtime_error("no span found");
	return span;
}
