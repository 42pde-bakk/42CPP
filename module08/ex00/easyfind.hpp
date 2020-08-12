/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   easyfind.hpp                                       :+:    :+:            */
/*                                                     +:+                    */
/*   By: peer <peer@student.codam.nl>                 +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/08/12 17:45:33 by peer          #+#    #+#                 */
/*   Updated: 2020/08/12 18:17:27 by peer          ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#ifndef EASYFIND_HPP
# define EASYFIND_HPP
#include <algorithm>

template< typename T>
typename T::iterator easyfind(T& container, const int& tofind) {
	return std::find(container.begin(), container.end(), tofind);
}

#endif
