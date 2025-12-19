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
#include <iostream>

int main(void)
{
  Phonebook phonebook;
  std::string input;

  while (1)
  {
    std::cout << "Enter an action : ADD, SEARCH or EXIT" << std::endl;
    if (!getline(std::cin, input))
      break;
    if (!input.compare("ADD"))
      phonebook.addContact();
    else if (!input.compare("SEARCH"))
    {
      if (phonebook.contacts[0].getFirstName().empty())
      {
        std::cout << "Error" << std::endl
                  << "No contacts has been registered" << std::endl;
        continue;
      }
      phonebook.displayContacts();
      phonebook.displayConctact();
    }
    else if (!input.compare("EXIT"))
      break;
    else
      continue;
  }
  std::cout << "Quitting program" << std::endl;
  return 0;
}
