/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   Array.hpp                                          :+:    :+:            */
/*                                                     +:+                    */
/*   By: peer <peer@student.codam.nl>                 +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/08/12 14:42:48 by peer          #+#    #+#                 */
/*   Updated: 2020/08/12 17:04:03 by peer          ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#ifndef ARRAY_HPP
# define ARRAY_HPP
#include <stdexcept>

template<typename T>
class Array {
	public:
	Array(void) {
		this->_n = 0;
		this->_arr = NULL;
	}
	Array(unsigned int n) {
		this->_n = n;
		this->_arr = new T[n];
		for (unsigned int i = 0; i < n; i++)
			this->_arr[i] = T();
	}
	Array(const Array& other) {
		this->_n = other._n;
		this->_arr = new T[this->_n];
		for (unsigned int i = 0; i < this->_n; i++) {
			this->arr[i] = other._arr[i];
		}
	}
	Array& operator=(const Array& other) {
		if (this != &other) {
			delete[] this->_arr;
			this->n = other._n;
			this->_arr = new T[this->_n];
			for (unsigned int i = 0; i < this->_n; i++)
				this->arr[i] = other._arr[i];
		}
		return *this;
	}
	T&		operator[](unsigned int idx) {
		if (idx >= this->_n)
			throw std::out_of_range("index out of range");
		return this->_arr[idx];
	}
	unsigned int	size() const {
		return this->_n;
	}

	private:
	unsigned int	_n;
	T*	_arr;
};



#endif
