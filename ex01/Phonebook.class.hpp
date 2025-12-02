/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Phonebook.class.hpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: teatime <teatime@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/14 17:15:27 by teatime           #+#    #+#             */
/*   Updated: 2025/11/17 17:04:41 by teatime          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PHONEBOOK_CLASS_HPP
#define PHONEBOOK_CLASS_HPP

class Phonebook
{
public:
    int publicFoo;

    Phonebook(void);
    ~Phonebook(void);

    void publicTest(void) const;

private:
    int _privateFoo;

    void _privateTest(void) const;
};

#endif