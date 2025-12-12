/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: egache <egache@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/14 17:24:24 by teatime           #+#    #+#             */
/*   Updated: 2025/12/09 12:11:03 by egache           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Phonebook.hpp"
#include "Contact.hpp"
#include <iostream>
#include <cstring>

/*
GLOBAL
  - CTRL + D issue
*/


int main(void)
{
  Phonebook	phonebook;
	std::string input;

	std::cout << "Enter an action : ADD, SEARCH or EXIT" << std::endl;
	while (getline(std::cin, input))
	{
		std::cout << "Enter an action : ADD, SEARCH or EXIT" << std::endl;
		if (!input.compare("ADD"))
			phonebook.addContact();
		else if (!input.compare("SEARCH"))
    {
      phonebook.displayContacts();
      phonebook.displayConctact();
    }
		else if (!input.compare("EXIT"))
		  break ;
		else
		{
			// std::cout << "Wrong input" << std::endl;
			continue ;
		}
	}
	std::cout << "Quitting program" << std::endl;
	return 0;
}
