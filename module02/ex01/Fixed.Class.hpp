/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   Fixed.Class.hpp                                    :+:    :+:            */
/*                                                     +:+                    */
/*   By: pde-bakk <pde-bakk@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/07/29 16:56:01 by pde-bakk      #+#    #+#                 */
/*   Updated: 2020/07/29 18:26:22 by pde-bakk      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#ifndef FIXED_CLASS_HPP
# define FIXED_CLASS_HPP
# include <string>

class Fixed
{
public:
	Fixed();
	Fixed (const int value);
	Fixed (const float value);
	Fixed( const Fixed &old_obj);
	float	toFloat( void) const;
	int		toInt( void) const;
	Fixed& operator=(const Fixed &other);
	int		getRawBits( void) const;
	void	setRawBits( int const raw);
	~Fixed();
private:
	/* data */
	int		_fpv;
	static const int	_nbFractBits = 0;
};

#endif
