/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.class.cpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: egache <egache@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/03 14:47:53 by egache            #+#    #+#             */
/*   Updated: 2025/12/03 20:07:43 by egache           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "Contact.class.hpp"

Contact::Contact(void)
{
    std::cout << "Contact constructor appelé" << std::endl;
    return;
}

Contact::~Contact(void)
{
    std::cout << "Contact destructor appelé" << std::endl;
    return;
}

// void Contact::publicTest(void) const
// {
//     std::cout << "je suis une fonction contact test" << std::endl;
//     return;
// }

void Contact::fillContact()
{
	while (this->_firstName.empty())
	{
		std::cout << "Enter First Name" << std::endl;
		std::getline(std::cin, this->_firstName);
		if (this->_firstName.empty())
			std::cout << "Empty field" << std::endl;
	}
    std::cout << "First Name : " << this->_firstName << std::endl;

	while (this->_lastName.empty())
	{
		std::cout << "Enter Last Name" << std::endl;
		std::getline(std::cin, this->_lastName);
		if (this->_lastName.empty())
			std::cout << "Empty field" << std::endl;
	}
	std::cout << "Last Name : " << this->_lastName << std::endl;

	while (this->_nickName.empty())
	{
		std::cout << "Enter Nick Name" << std::endl;
		std::getline(std::cin, this->_nickName);
		if (this->_nickName.empty())
			std::cout << "Empty field" << std::endl;
	}
    std::cout << "Nick Name : " << this->_nickName << std::endl;

	while (this->_phoneNumber.empty())
	{
		std::cout << "Enter Phone Number" << std::endl;
		std::getline(std::cin, this->_phoneNumber);
		if (this->_phoneNumber.empty())
			std::cout << "Empty field" << std::endl;
	}
    std::cout << "Phone Number : " << this->_phoneNumber << std::endl;

	while (this->_darkestSecret.empty())
	{
		std::cout << "Enter Darkest Secret" << std::endl;
		std::getline(std::cin, this->_darkestSecret);
		if (this->_darkestSecret.empty())
			std::cout << "Empty field" << std::endl;
	}
	std::cout << "Darkest Secret : " << this->_darkestSecret << std::endl;
	return ;

}

std::string Contact::getFirstName() const
{
	return (this->_firstName);
}

std::string Contact::getLastName() const
{
	return (this->_lastName);
}

std::string Contact::getNickName() const
{
	return (this->_nickName);
}

std::string Contact::getPhoneNumber() const
{
	return (this->_phoneNumber);
}

std::string Contact::getDarkestSecret() const
{
	return (this->_darkestSecret);
}

void Contact::emptyContact()
{
	this->_firstName = "";
	this->_lastName = "";
	this->_nickName = "";
	this->_phoneNumber = "";
	this->_darkestSecret = "";
}
