/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Phonebook.class.cpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: egache <egache@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/14 17:21:57 by teatime           #+#    #+#             */
/*   Updated: 2025/12/03 20:08:21 by egache           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <iomanip> //library for setw
#include "Phonebook.hpp"

Phonebook::Phonebook(void)
{
    std::cout << "Phonebook constructor appelé" << std::endl;
	this->_added = 0;
	this->_oldest = 0;
    return;
}

Phonebook::~Phonebook(void)
{
    std::cout << "Phonebook destructor appelé" << std::endl;
    return;
}

void Phonebook::addContact()
{
	if (this->_added == 8)
	{
		if (this->_oldest == 8)
			this->_oldest = 0;
		this->contacts[this->_oldest].fillContact();
		this->_oldest++;
	}
	else
	{
		this->contacts[this->_added].fillContact();
		this->_added++;
	}
	std::cout << "index value : [" << this->_added << "]" << std::endl;
}

void Phonebook::displayContacts() const
{
	for(int i = 0; i < this->_added; i++)
  {   
    std::cout << "|";
    std::cout << std::setw(10) << std::right << i;
    std::cout << "|";
    std::cout << std::setw(10) << std::right << this->contacts[i].truncateStr(this->contacts[i].getFirstName());
    std::cout << "|";
    std::cout << std::setw(10) << std::right << this->contacts[i].truncateStr(this->contacts[i].getLastName());
    std::cout << "|";
    std::cout << std::setw(10) << std::right << this->contacts[i].truncateStr(this->contacts[i].getNickName());
    std::cout << "|" << std::endl;
  }
}

void Phonebook::displayConctact() const
{ 
  int i;

  while (1)
  {  
    std::cout << "Enter index of entry to display (Value between 0 - 8)" << std::endl;
    std::cin >> i;
    if (!this->contacts[i].getFirstName().empty())
    {
      std::cout << this->contacts[i].getFirstName() << std::endl;
      std::cout << this->contacts[i].getLastName() << std::endl;
      std::cout << this->contacts[i].getNickName() << std::endl;
      std::cout << this->contacts[i].getPhoneNumber() << std::endl;
      std::cout << this->contacts[i].getDarkestSecret() << std::endl;
      return ;
    }
    else
      std::cout << "Error" << std::endl << "Wrong value or contact doesn't exist" << std::endl;
  }
}
