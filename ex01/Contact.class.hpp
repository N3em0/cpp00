/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.class.hpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: egache <egache@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/03 14:46:34 by egache            #+#    #+#             */
/*   Updated: 2025/12/03 20:06:27 by egache           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CONTACT_CLASS_HPP
#define CONTACT_CLASS_HPP
#include <iostream>


class Contact
{
public:

Contact(void);
~Contact(void);

void fillContact();
void emptyContact();

std::string getFirstName(void) const;
std::string getLastName(void) const;
std::string getNickName(void) const;
std::string getPhoneNumber(void) const;
std::string getDarkestSecret(void) const;


private:

std::string _firstName;
std::string _lastName;
std::string _nickName;
std::string _phoneNumber;
std::string _darkestSecret;
};

#endif
