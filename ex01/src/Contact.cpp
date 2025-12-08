/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.cpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: egache <egache@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/03 14:47:53 by egache            #+#    #+#             */
/*   Updated: 2025/12/03 20:07:43 by egache           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "Contact.hpp"

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

bool Contact::phoneIsDigit()
{
  for (int i = 0; this->_phoneNumber[i]; i++)
  {
    if (!std::isdigit(this->_phoneNumber[i]))
        return false;
  }
  return true;
}

bool Contact::strIsAlpha(std::string str)
{
  for (int i = 0; str[i]; i++)
  {
    if (!std::isalpha(str[i]))
        return false;
  }
  return true;
}

bool Contact::strIsAlphaOrSpace(std::string str)
{
  for (int i = 0; str[i]; i++)
  {
    if (!std::isalpha(str[i]))
    {
      if (str[i] != ' ' && str[i] != '.')
        return false;
    }
  }
  return true;
}

void Contact::fillContact()
{
	while (this->_firstName.empty())
	{
		std::cout << "Enter First Name" << std::endl;
		std::getline(std::cin, this->_firstName);
		if (this->_firstName.empty())
			std::cout << "Error" << std::endl << "Empty field. Try again" << std::endl << std::endl;
    else if (!strIsAlpha(this->_firstName))
    {
      this->_firstName.clear();
			std::cout << "Error" << std::endl << "Non alphabetical characters. Try again" << std::endl << std::endl;
    }
	}
  //std::cout << "First Name : " << this->_firstName << std::endl;

	while (this->_lastName.empty())
	{
		std::cout << "Enter Last Name" << std::endl;
		std::getline(std::cin, this->_lastName);
		if (this->_lastName.empty())
			std::cout << "Error" << std::endl << "Empty field. Try again" << std::endl << std::endl;
    else if (!strIsAlpha(this->_lastName))
    {
      this->_lastName.clear();
			std::cout << "Error" << std::endl << "Non alphabetical characters. Try again" << std::endl << std::endl;
    }
	}
	//std::cout << "Last Name : " << this->_lastName << std::endl;

	while (this->_nickName.empty())
	{
		std::cout << "Enter Nick Name" << std::endl;
		std::getline(std::cin, this->_nickName);
		if (this->_nickName.empty())
			std::cout << "Error" << std::endl << "Empty field. Try again" << std::endl << std::endl;
	}
  //std::cout << "Nick Name : " << this->_nickName << std::endl;

	while (this->_phoneNumber.empty())
	{
		std::cout << "Enter Phone Number" << std::endl;
		std::getline(std::cin, this->_phoneNumber);
		if (this->_phoneNumber.empty())
			std::cout << "Error" << std::endl << "Empty field. Try again" << std::endl << std::endl;
    else if (!phoneIsDigit())
    {
      this->_phoneNumber.clear();
			std::cout << "Error" << std::endl << "Non numeric characters. Try again" << std::endl << std::endl;
    }
    else if (this->_phoneNumber.length() != 10)
    {
      this->_phoneNumber.clear();
			std::cout << "Error" << std::endl << "Enter a valid phone number (10 characters). Try again" << std::endl << std::endl;
    }
	}
  //std::cout << "Phone Number : " << this->_phoneNumber << std::endl;

	while (this->_darkestSecret.empty())
	{
		std::cout << "Enter Darkest Secret" << std::endl;
		std::getline(std::cin, this->_darkestSecret);
		if (this->_darkestSecret.empty())
			std::cout << "Error" << std::endl << "Empty field. Try again" << std::endl << std::endl;
    else if (!strIsAlphaOrSpace(this->_darkestSecret))
    {
      this->_darkestSecret.clear();
			std::cout << "Error" << std::endl << "Word or sentences only. Try again" << std::endl << std::endl;
    }
	}
	//std::cout << "Darkest Secret : " << this->_darkestSecret << std::endl;
	return ;

}

void Contact::emptyContact()
{
	this->_firstName = "";
	this->_lastName = "";
	this->_nickName = "";
	this->_phoneNumber = "";
	this->_darkestSecret = "";
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

std::string Contact::truncateStr(std::string str) const
{
  if (str.length() > 10)
    return str.substr(0, 9) + ".";
  return str;
}

