/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   contact.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vsmolii <vsmolii@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/21 16:48:24 by vsmolii           #+#    #+#             */
/*   Updated: 2019/10/22 17:02:42 by vsmolii          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CONTACT_H
#define CONTACT_H

#include <iostream>
#include <string>
#include <iomanip>

class	Contact
{
	public:
		Contact(void);
		~Contact(void);

		std::string first_name;
		std::string last_name;
		std::string nickname;
		std::string login;
		std::string postal_address;
		std::string email_address;
		std::string phone_number;
		std::string birthday_date;
		std::string favorite_meal;
		std::string underwear_color;
		std::string darkest_secter;

		void	set_first_name(std::string);
		void	set_last_name(std::string);
		void	set_nickname(std::string);
		void	set_login(std::string);
		void	set_postal_address(std::string);
		void	set_email_address(std::string);
		void	set_phone_number(std::string);
		void	set_birthday_date(std::string);
		void	set_favorite_meal(std::string);
		void	set_underwear_color(std::string);
		void	set_darkest_secret(std::string);


		std::string		get_first_name(void);
		std::string		get_last_name(void);
		std::string		get_nickname(void);
		std::string		get_login(void);
		std::string		get_postal_address(void);
		std::string		get_email_address(void);
		std::string		get_phone_number(void);
		std::string		get_birthday_date(void);
		std::string		get_favorite_meal(void);
		std::string		get_underwear_color(void);
		std::string		get_darkest_secter(void);

};

Contact		add_contact(void);
void		show_contacts(Contact *persons, int size);
void		print_extended_info(Contact *persons, int i);
void		str_for_print(std::string str);


#endif
