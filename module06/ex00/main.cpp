/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   main.cpp                                           :+:    :+:            */
/*                                                     +:+                    */
/*   By: peer <peer@student.codam.nl>                 +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/08/11 12:38:57 by peer          #+#    #+#                 */
/*   Updated: 2020/08/12 17:35:27 by peer          ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include <cstring>
#include <string>
#include <iostream>
#include <iomanip>
#include <exception>
#include <stdlib.h>
#include <limits>

#define CHAR 0
#define INT 1
#define FLOAT 2
#define DOUBLE 3
#define OTHER 4
#define ERR -1
std::string	g_nanid;
bool	g_int_imp = false;
bool	g_float_imp = false;
bool	g_double_imp = false;

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
	long double tmp = std::atof(input);
	if (tmp > __INT32_MAX__ || tmp < -1 * __INT32_MAX__ - 1)
		g_int_imp = true;
	*i = static_cast<int>(tmp);
	*c = static_cast<char>(tmp);
	*f = static_cast<float>(tmp);
	*d = static_cast<double>(tmp);
}

void	convert_float(const char* input, char *c, int *i, float *f, double *d) {
	long double tmp = std::atof(input);
	if (tmp > __INT32_MAX__ || tmp < -1 * __INT32_MAX__ - 1)
		g_int_imp = true;
	if (tmp > __FLT_MAX__ || tmp < -1 * __FLT_MAX__ - 1)
		g_float_imp = true;
	*f = static_cast<float>(tmp);
	*c = static_cast<char>(tmp);
	*i = static_cast<int>(tmp);
	*d = static_cast<double>(tmp);
}

void	convert_double(const char* input, char *c, int *i, float *f, double *d) {
	long double tmp = std::atof(input);
	if (tmp > __INT32_MAX__ || tmp < -1 * __INT32_MAX__ - 1)
		g_int_imp = true;
	if (tmp > __FLT_MAX__ || tmp < -1 * __FLT_MAX__ - 1)
		g_float_imp = true;
	if (tmp > __DBL_MAX__ || tmp < -1 * __DBL_MAX__ - 1)
		g_double_imp = true;
	*d = static_cast<double>(tmp);
	*c = static_cast<char>(tmp);
	*i = static_cast<float>(tmp);
	*f = static_cast<double>(tmp);
}

void	convert_other(const char* input, char *c, int *i, float *f, double *d) {
	(void)input;
	if (g_nanid == "inf" || g_nanid == "inff" || g_nanid == "+inf" || g_nanid == "+inff")
		*f = 1.0 / 0.0;
	else if (g_nanid == "-inf" || g_nanid == "-inff")
		*f = -1.0 / 0.0;
	else if (g_nanid == "nan" || g_nanid == "nanf")
		*f = 0.0 / 0.0;
	g_int_imp = true;
	*c = static_cast<char>(*f);
	*i = static_cast<int>(*f);
	*d = static_cast<double>(*f);
}

int	detect_type(std::string input, int *decimals) {
	int i = 0;
	int isfloat = 0;
	std::string others[] = {"inf", "inff", "+inf", "+inff", "-inf", "-inff", "nan", "nanf" };
	for (int n = 0; n < 8; n++) {
		if (input == others[n]) {
			g_nanid = others[n];
			return OTHER;
		}
	}
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
		if (input[i] == 'f' && isfloat > 0) {
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
	static t_make_funct makeFormFuncts[5] = {	convert_char,
												convert_int,
												convert_float,
												convert_double,
												convert_other	};
	int type = detect_type(argv[1], &decimals);
	if (decimals == 0)
		decimals += 1;
	std::cout << std::setprecision(decimals) << std::fixed;
	if (type == -1) {
		std::cout << "err" << std::endl;
	}
	else
		makeFormFuncts[type](argv[1], &c, &i, &f, &d);
	try {
		std::cout << "char: ";
		if (!c)
			throw ImpossibleException();
		if (!isprint(c))
			throw NonDisplayableException();
		std::cout << c << std::endl;
	}
	catch (std::exception& e) {
		std::cout << e.what() << std::endl;
	}
	try {
		std::cout << "int: ";
		if (g_int_imp)
			throw ImpossibleException();
		std::cout << i << std::endl;
	}
	catch (std::exception& e) {
		std::cout << e.what() << std::endl;
	}
	try {
		std::cout << "float: ";
		if (g_float_imp)
			throw ImpossibleException();
		std::cout << f << 'f' << std::endl;
	}
	catch (std::exception& e) {
		std::cout << e.what() << std::endl;
	}
	try {
		std::cout << "double: ";
		if (g_double_imp)
			throw ImpossibleException();
		std::cout << d << std::endl;
	}
	catch (std::exception& e) {
		std::cout << e.what() << std::endl;
	}
	return 0;
}

