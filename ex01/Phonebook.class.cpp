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
#include "Phonebook.class.hpp"

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
		std::cout << "| " << i << " | "
		<< this->contacts[i].getFirstName() << " | "
		<< this->contacts[i].getLastName() << " | "
		<< this->contacts[i].getNickName() << " |" << std::endl;
}
