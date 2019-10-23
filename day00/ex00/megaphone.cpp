/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   magaphone.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vsmolii <vsmolii@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/21 11:20:21 by vsmolii           #+#    #+#             */
/*   Updated: 2019/10/21 12:43:44 by vsmolii          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <string>

void	function_print(char *str)
{
	for (int len = 0; str[len] != '\0'; len++)
	for (int i = 0; i <= len; i++)
		str[i] = toupper(str[i]);
	std::cout << str;
}

int main(int ac, char **av)
{
	int i = 0;
	if (ac < 2)
		std::cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *";
	while (++i < ac)
	{
		function_print(av[i]);
		if (i != ac - 1)
			std::cout << " ";
	}
	std::cout << std::endl;
}
