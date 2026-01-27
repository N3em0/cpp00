/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Phonebook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: egache <egache@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/14 17:21:57 by teatime           #+#    #+#             */
/*   Updated: 2025/12/09 11:43:57 by egache           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Phonebook.hpp"
#include <iomanip> //setw

Phonebook::Phonebook(void)
{
  this->_added = 0;
  this->_oldest = 0;
  return;
}

Phonebook::~Phonebook(void) { return; }

void Phonebook::addContact()
{
  if (this->_added == 8)
  {
    if (this->_oldest == 8)
      this->_oldest = 0;
    this->contacts[this->_oldest].clearContact();
    this->contacts[this->_oldest].fillContact();
    this->_oldest++;
  }
  else
  {
    this->contacts[this->_added].fillContact();
    this->_added++;
  }
}

void Phonebook::displayContacts() const
{
  for (int i = 0; i < this->_added; i++)
  {
    std::cout << "|";
    std::cout << std::setw(10) << std::right << i;
    std::cout << "|";
    std::cout << std::setw(10) << std::right
              << this->contacts[i].truncateStr(
                     this->contacts[i].getFirstName());
    std::cout << "|";
    std::cout << std::setw(10) << std::right
              << this->contacts[i].truncateStr(this->contacts[i].getLastName());
    std::cout << "|";
    std::cout << std::setw(10) << std::right
              << this->contacts[i].truncateStr(this->contacts[i].getNickName());
    std::cout << "|" << std::endl;
  }
}

void Phonebook::displayContact() const
{
  std::string input;
  int i;

  while (1)
  {
    std::cout << "Enter index of entry to display (Value between 0 - 7)"
              << std::endl;
    if (!getline(std::cin, input))
      break;
    if (input.length() != 1)
    {
      input.clear();
      std::cout << "Error" << std::endl
                << "Only 1 digit value. Try again" << std::endl;
      continue;
    }
    if (!std::isdigit(input[0]))
    {
      input.clear();
      std::cout << "Error" << std::endl
                << "Only positives digital values. Try again" << std::endl;
      continue;
    }
    i = input[0] - 48;
    if (i < 8 && !this->contacts[i].getFirstName().empty())
    {
      std::cout << "First name     : " << this->contacts[i].getFirstName()
                << std::endl;
      std::cout << "Last name      : " << this->contacts[i].getLastName()
                << std::endl;
      std::cout << "Nickname       : " << this->contacts[i].getNickName()
                << std::endl;
      std::cout << "Phone number   : " << this->contacts[i].getPhoneNumber()
                << std::endl;
      std::cout << "Darkest Secret : " << this->contacts[i].getDarkestSecret()
                << std::endl;
      input.clear();
      return;
    }
    else
      std::cout << "Error" << std::endl
                << "Contact doesn't exist. Try again" << std::endl;
  }
}
