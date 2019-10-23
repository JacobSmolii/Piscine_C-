/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   contact_class.cpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vsmolii <vsmolii@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/21 17:21:08 by vsmolii           #+#    #+#             */
/*   Updated: 2019/10/22 17:26:45 by vsmolii          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "contact.hpp"

Contact		add_contact(void)
{
	Contact			instance;
	std::string		str;

	std::cout << "Enter first name please!): ";
	std::cin >> str;
	instance.set_first_name(str);

	std::cout << "Enter last name please!): ";
	std::cin >> str;
	instance.set_last_name(str);

	std::cout << "Enter nickname please!): ";
	std::cin >> str;
	instance.set_nickname(str);

	std::cout << "Enter login please!): ";
	std::cin >> str;
	instance.set_login(str);

	std::cout << "Enter postal address please!): ";
	std::cin >> str;
	instance.set_postal_address(str);

	std::cout << "Enter email address please!): ";
	std::cin >> str;
	instance.set_email_address(str);

	std::cout << "Enter phone number please!): ";
	std::cin >> str;
	instance.set_phone_number(str);

	std::cout << "Enter birthday date please!): ";
	std::cin >> str;
	instance.set_birthday_date(str);

	std::cout << "Enter favorite meal please!): ";
	std::cin >> str;
	instance.set_favorite_meal(str);

	std::cout << "Enter underwear color please!): ";
	std::cin >> str;
	instance.set_underwear_color(str);

	std::cout << "Enter darkest secret please!): ";
	std::cin >> str;
	instance.set_darkest_secret(str);

	return (instance);
}

void	Contact::set_first_name(std::string str)
{
	this->first_name = str;
}

void	Contact::set_last_name(std::string str)
{
	this->last_name = str;
}

void	Contact::set_nickname(std::string str)
{
	this->nickname = str;
}

void	Contact::set_login(std::string str)
{
	this->login = str;
}

void	Contact::set_postal_address(std::string str)
{
	this->postal_address = str;
}

void	Contact::set_email_address(std::string str)
{
	this->email_address = str;
}

void	Contact::set_phone_number(std::string str)
{
	this->phone_number = str;
}

void	Contact::set_birthday_date(std::string str)
{
	this->birthday_date = str;
}

void	Contact::set_favorite_meal(std::string str)
{
	this->favorite_meal = str;
}

void	Contact::set_underwear_color(std::string str)
{
	this->underwear_color = str;
}

void	Contact::set_darkest_secret(std::string str)
{
	this->darkest_secter = str;
}

std::string		Contact::get_first_name(void)
{
	return (this->first_name);
}

std::string		Contact::get_last_name(void)
{
	return (this->last_name);
}

std::string		Contact::get_nickname(void)
{
	return (this->nickname);
}

std::string		Contact::get_login(void)
{
	return (this->login);
}

std::string		Contact::get_postal_address(void)
{
	return (this->postal_address);
}

std::string		Contact::get_email_address(void)
{
	return (this->email_address);
}

std::string		Contact::get_phone_number(void)
{
	return (this->phone_number);
}

std::string		Contact::get_birthday_date(void)
{
	return (this->birthday_date);
}

std::string		Contact::get_favorite_meal(void)
{
	return (this->favorite_meal);
}

std::string		Contact::get_underwear_color(void)
{
	return (this->underwear_color);
}

std::string		Contact::get_darkest_secter(void)
{
	return (this->darkest_secter);
}
