/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   serialize.cpp                                      :+:    :+:            */
/*                                                     +:+                    */
/*   By: peer <peer@student.codam.nl>                 +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/08/11 23:12:29 by peer          #+#    #+#                 */
/*   Updated: 2020/08/14 17:07:26 by pde-bakk      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <string>
#include <cstring>
#include <stdlib.h>

const char* alphanum = "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz1234567890";

struct Data {
	std::string s1;
	int	n;
	std::string s2;
};

void	*serialize(void) {
	char *serial = new char[20];
	for (int i = 0; i < 8; i++) {
		serial[i] = alphanum[rand() % 62];
		serial[i + 12] = alphanum[rand() % 62];
	}
	int n = rand();
	memcpy(serial + 8, &n, sizeof(int));
	return static_cast<void*>(serial);
}

Data	*deserialize(void *raw) {
	Data *out = new Data;
	out->s1 = std::string(reinterpret_cast<char*>(raw), 8);
	out->n = *(static_cast<int*>(raw) + 2);
	out->s2 = std::string(reinterpret_cast<char*>(raw) + 12, 8);
	return out;
}

void	peer(void) {
	srand(time(NULL));
	void* tmp = serialize();
	Data *dat = deserialize(tmp);
	delete static_cast<char*>(tmp);
	std::cout << dat->s1 << std::endl
			<< dat->n << std::endl
			<< dat->s2 << std::endl;
	delete dat;
}

int main() {
	peer();
	// system("leaks serialize.out | grep bytes");
	return 0;
}
