#ifndef PHONEBOOK_H
#define PHONEBOOK_H

#include "Contact.hpp"

class Contact;

class Phonebook 
{
    public:

    Phonebook();
    ~Phonebook();

    void ft_add(int i);
    void ft_search(int i);

    Contact entries[8];
};

#endif
