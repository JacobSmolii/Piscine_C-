/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vsmolii <vsmolii@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/21 16:48:22 by vsmolii           #+#    #+#             */
/*   Updated: 2019/10/22 18:25:15 by vsmolii          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "contact.hpp"

Contact::Contact(void) {}

Contact::~Contact(void) {}

int main()
{
	int i = -1;
	Contact	persons[8];
	std::string command;

	while (1)
	{
		std::cout << "Enter the following commands ('ADD', 'SEARCH', 'EXIT'): ";
		std::cin >> command;
		if (command.compare("EXIT") == 0)
			exit(1);
		else if (command.compare("ADD") == 0)
		{
			if (++i < 8)
				persons[i] = add_contact();
		}
		else if (command.compare("SEARCH") == 0)
		{
			show_contacts(persons, i);
		}
		else
			continue ;
	}
}
