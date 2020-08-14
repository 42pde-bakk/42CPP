/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   easyfind.hpp                                       :+:    :+:            */
/*                                                     +:+                    */
/*   By: peer <peer@student.codam.nl>                 +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/08/12 17:45:33 by peer          #+#    #+#                 */
/*   Updated: 2020/08/14 20:02:19 by pde-bakk      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#ifndef EASYFIND_HPP
# define EASYFIND_HPP
#include <algorithm>

template <typename T>
typename T::iterator easyfind(T& container, const int& tofind) {
	typename T::iterator found;

	found = std::find(container.begin(), container.end(), tofind);
	if (found == container.end())
		throw std::runtime_error("Element not found");
	return found;
}

#endif
