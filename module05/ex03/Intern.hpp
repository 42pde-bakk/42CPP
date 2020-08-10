/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   Intern.hpp                                         :+:    :+:            */
/*                                                     +:+                    */
/*   By: peer <peer@student.codam.nl>                 +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/08/10 21:57:49 by peer          #+#    #+#                 */
/*   Updated: 2020/08/10 22:09:30 by peer          ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#ifndef INTERN_HPP
# define INTERN_HPP

#include "Form.hpp"
#include <string>

class Form;
class Intern
{
public:
	Intern(/* args */);
	~Intern();
	
	Form*	makeForm(const std::string& formname, const std::string& formtarget) const;
private:
	Intern(const Intern& other);
	Intern& operator=(const Intern& other);
};


#endif
