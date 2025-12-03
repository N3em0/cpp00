/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Phonebook.class.hpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: egache <egache@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/14 17:15:27 by teatime           #+#    #+#             */
/*   Updated: 2025/12/03 17:44:54 by egache           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PHONEBOOK_CLASS_HPP
#define PHONEBOOK_CLASS_HPP

#include "Contact.class.hpp"

class Phonebook
{
public:
    Contact contacts[8];

    Phonebook(void);
    ~Phonebook(void);

    void	displayContacts(void) const;
	void	addContact(void);

private:
	int _added;
	int _oldest;

    void _privateTest(void) const;
};

#endif
