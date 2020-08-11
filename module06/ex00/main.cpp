/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   main.cpp                                           :+:    :+:            */
/*                                                     +:+                    */
/*   By: peer <peer@student.codam.nl>                 +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/08/11 12:38:57 by peer          #+#    #+#                 */
/*   Updated: 2020/08/11 16:06:23 by peer          ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include <cstring>
#include <string>
#include <iostream>
#include <iomanip>
#include <exception>
#include <stdlib.h>

#define CHAR 0
#define INT 1
#define FLOAT 2
#define DOUBLE 3
#define NAN 4
#define INF 5
#define MININF 6
#define ERR -1

class NonDisplayableException : public std::runtime_error {
	public:
		NonDisplayableException() : std::runtime_error("Non displayable") {}
};

class ImpossibleException : public std::runtime_error {
	public:
		ImpossibleException() : std::runtime_error("impossible") {}
};

void	convert_char(const char* input, char *c, int *i, float *f, double *d) {
	*c = input[0];
	*i = static_cast<int>(*c);
	*f = static_cast<float>(*c);
	*d = static_cast<double>(*c);
}

void	convert_int(const char* input, char *c, int *i, float *f, double *d) {
	*i = std::atoi(input);
	*c = static_cast<char>(*i);
	*f = static_cast<float>(*i);
	*d = static_cast<double>(*i);
}

void	convert_float(const char* input, char *c, int *i, float *f, double *d) {
	*f = std::atof(input);
	*c = static_cast<char>(*f);
	*i = static_cast<int>(*f);
	*d = static_cast<double>(*f);
}

void	convert_double(const char* input, char *c, int *i, float *f, double *d) {
	*d = std::atof(input);
	*c = static_cast<char>(*d);
	*i = static_cast<float>(*d);
	*f = static_cast<double>(*d);
}

void	print_nan(const char* input, char *c, int *i, float *f, double *d) {
	(void)input; (void)c; (void)i; (void)f; (void)d;
	std::cout << "char: impossible" << std::endl
			<< "int: impossible" << std::endl
			<< "float: nanf" << std::endl
			<< "double: nan" << std::endl;
}

void	print_inf(const char* input, char *c, int *i, float *f, double *d) {
	(void)input; (void)c; (void)i; (void)f; (void)d;
	std::cout << "char: impossible" << std::endl
			<< "int: impossible" << std::endl
			<< "float: inff" << std::endl
			<< "double: inf" << std::endl;
}

void	print_mininf(const char* input, char *c, int *i, float *f, double *d) {
	(void)input; (void)c; (void)i; (void)f; (void)d;
	std::cout << "char: impossible" << std::endl
			<< "int: impossible" << std::endl
			<< "float: -inff" << std::endl
			<< "double: -inf" << std::endl;
}

int	detect_type(std::string input, int *decimals) {
	int i = 0;
	int isfloat = 0;

	if (std::strcmp(input.c_str(), "nan") == 0 || std::strcmp(input.c_str(), "nanf") == 0)
		return NAN;
	if (std::strcmp(input.c_str(), "inf") == 0 || std::strcmp(input.c_str(), "+inf") == 0 ||
		std::strcmp(input.c_str(), "inff") == 0 || std::strcmp(input.c_str(), "+inff") == 0)
		return INF;
	if (std::strcmp(input.c_str(), "-inf") == 0 || std::strcmp(input.c_str(), "-inff") == 0)
		return MININF;
	if (input.length() == 1 && !isdigit(input[0]))
		return CHAR;
	while (input[i]) {
		if (input[i] == '.') {
			if (isfloat)
				return ERR;
			for (int d = 0; input[i + d + 1]; d++) {
				if (isdigit(input[i + d + 1]))
					(*decimals)++;
			}
			isfloat = 1;
		}
		if (input[i] == 'f') {
			if (isfloat == 2)
				return ERR;
			isfloat = 2;
		}
		i++;
	}
	if (isfloat) {
		if (isfloat == 1)
			return DOUBLE;
		return FLOAT;
	}
	return INT;
}

typedef void (*t_make_funct)(const char*, char *, int *, float *, double *);

int main(int argc, char **argv) {
	if (argc != 2) {
		std::cout << "Bad argument" << std::endl;
		return 0;
	}
	char c = 0;
	int	i = 0;
	float f = 0.0f;
	double d = 0.0;
	int decimals = 0;
	static t_make_funct makeFormFuncts[7] = {	convert_char,
												convert_int,
												convert_float,
												convert_double,
												print_nan,
												print_inf,
												print_mininf };
	int type = detect_type(argv[1], &decimals);
	if (decimals == 0)
		decimals += 1;
	std::cout << std::setprecision(decimals) << std::fixed;
	if (type == -1) {
		std::cout << "err" << std::endl;
	}
	else
		makeFormFuncts[type](argv[1], &c, &i, &f, &d);
	if (type > 3)
		return 0;
	try {
		std::cout << "char: ";
		if (!isprint(c))
			throw NonDisplayableException();
		std::cout << c << std::endl;
	}
	catch (std::exception& e) {
		std::cerr << e.what() << std::endl;
	}
	std::cout << "int: " << i << std::endl;
	std::cout << "float: " << f << 'f' <<  std::endl;
	std::cout << "double: " << d << std::endl;
	return 0;
}

