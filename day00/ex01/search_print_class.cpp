/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   search_print_class.cpp                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vsmolii <vsmolii@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/22 15:00:40 by vsmolii           #+#    #+#             */
/*   Updated: 2019/10/22 18:24:00 by vsmolii          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "contact.hpp"

void		str_for_print(std::string str)
{
	if (str.length() < 10)
		std::cout << std::setw(10) << str << "|" ;
	else
		std::cout << str.substr(1, 9) << '.' << "|";
}

void	print_extended_info(Contact *persons, int i)
{
	std::cout << "Index of the contact: " << i << std::endl;
	std::cout << "First name:      " << persons[i].get_first_name() << std::endl;
	std::cout << "Last name:       " << persons[i].get_last_name() << std::endl;
	std::cout << "Nickname :       " << persons[i].get_nickname() << std::endl;
	std::cout << "Login:           " << persons[i].get_login() << std::endl;
	std::cout << "Postal_address:  " << persons[i].get_postal_address() << std::endl;
	std::cout << "Email_address:   " << persons[i].get_email_address() << std::endl;
	std::cout << "Phone_number:    " << persons[i].get_phone_number() << std::endl;
	std::cout << "Birthday_date:   " << persons[i].get_birthday_date() << std::endl;
	std::cout << "Favorite_meal:   " << persons[i].get_favorite_meal() << std::endl;
	std::cout << "Underwear_color: " << persons[i].get_underwear_color() << std::endl;
	std::cout << "Darkest_secter:  " << persons[i].get_darkest_secter() << std::endl;
}

void	show_contacts(Contact *persons, int size)
{
	std::string	ind;
	std::string str;

	std::cout << "|     Index|First name| Last name|  Nickname|" << std::endl;
	std::cout << "_____________________________________________" << std::endl;
	for (int i = 0; i <= size; i++)
	{
		std::cout << "|" << std::setw(10) << i << "|";

		str = persons[i].get_first_name();
		str_for_print(str);

		str = persons[i].get_last_name();
		str_for_print(str);

		str = persons[i].get_nickname();
		str_for_print(str);

		std::cout << std::endl;
	}
	std::cout << "Enter the index of the contact you would like to know more!: ";
	std::cin >> ind;
	std::cout << (ind[0] - '0') << std::endl;
	if ((ind[0] - '0') <= size && !ind[1])
		print_extended_info(persons, ind[0] - '0');
	else
	{
		std::cout << "You are trying to see something that doesn't exit. Please type again 'SEARCH' and then the index of the contact!";
		std::cout << std::endl;
		return ;
	}
}
