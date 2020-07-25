/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   Contact.Class.hpp                                  :+:    :+:            */
/*                                                     +:+                    */
/*   By: pde-bakk <pde-bakk@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/07/25 21:24:47 by pde-bakk      #+#    #+#                 */
/*   Updated: 2020/07/25 23:10:04 by pde-bakk      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#ifndef CONTACT_CLASS_HPP
# define CONTACT_CLASS_HPP

# include <iostream>
# include <iomanip>

class Contact {
	public:
		void	set_firstname(std::string name);
		void	set_lastname(std::string name);
		void	set_nickname(std::string name);
		void	set_login(std::string info);
		void	set_postal_address(std::string address);
		void	set_email_address(std::string address);
		void	set_phone_number(std::string number);
		void	set_birthday(std::string birthday);
		void	set_favourite_meal(std::string meal);
		void	set_underwear_colour(std::string colour);
		void	set_darkest_secret(std::string secret);
		void	print(void);

	private:	
		std::string _first_name;
		std::string _last_name;
		std::string _nickname;
		std::string _login;
		std::string _postal_address;
		std::string _email_address;
		std::string _phone_number;
		std::string _birthday;
		std::string _favourite_meal;
		std::string _underwear_colour;
		std::string _darkest_secret;
};

#endif
