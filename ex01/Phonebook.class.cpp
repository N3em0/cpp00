/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Phonebook.class.cpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: teatime <teatime@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/14 17:21:57 by teatime           #+#    #+#             */
/*   Updated: 2025/11/17 17:06:09 by teatime          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "Phonebook.class.hpp"

Phonebook::Phonebook(void)
{
    std::cout << "Caca appelé" << std::endl;
    this->publicFoo = 42;

    std::cout << "Foo value : " << this->publicFoo << std::endl;

    this->publicTest();
    return;
}

Phonebook::~Phonebook(void)
{
    std::cout << "Pipi appelé" << std::endl;
    return;
}

void Phonebook::publicTest(void) const
{
    std::cout << "je suis une fonction test" << std::endl;
    return;
}