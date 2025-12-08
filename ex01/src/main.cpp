/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: egache <egache@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/14 17:24:24 by teatime           #+#    #+#             */
/*   Updated: 2025/12/03 17:56:53 by egache           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Phonebook.hpp"
#include "Contact.hpp"
#include <iostream>
#include <cstring>


/*
ADD
  - Parsing : 
    - Phonebook : Only digit
    - Names & darkest : Only alpha
    - Nickname : Anything
SEARCH
  - single contact
    - Protect valeur d'entrée. Ne pouvoir rentrer que 0 - 8
GLOBAL
  - CTRL + D issue

*/


int main(void)
{
    Phonebook	phonebook;
	std::string input;

	while (1)
	{
		std::cout << "Enter an action : ADD, SEARCH or EXIT" << std::endl;
		getline(std::cin, input);
		if (!input.compare("ADD"))
			phonebook.addContact();
		else if (!input.compare("SEARCH"))
    {
      phonebook.displayContacts();
      phonebook.displayConctact(); 
    }
		else if (!input.compare("EXIT"))
		{
			std::cout << "Quitting program" << std::endl;
			return 0;
		}
		else
		{
			std::cout << "Wrong input" << std::endl;
			continue ;
		}
	}
	return 0;
}
