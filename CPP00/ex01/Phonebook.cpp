#include <iostream>
#include <string>
#include <stdexcept>
#include <cstdio>
#include "Phonebook.hpp"

Phonebook::Phonebook()
{
}

Phonebook::~Phonebook()
{
}

void Phonebook::ft_add(int i)
{
    if (i == 8)
        entries[7].SetContact();
    else
        this->entries[i].SetContact();
}

void Phonebook::ft_search(int i)
{
    int y = 0;
    std::string index;
    if (i == 0)
    {
        std::cout << "NO ENTRIES !" << std::endl;
        return;
    }
    std::cout.width(10);
    std::cout << std::right << "INDEX"
              << "|";
    std::cout.width(10);
    std::cout << std::right << "FIRST NAME"
              << "|";
    std::cout.width(10);
    std::cout << std::right << "LAST NAME"
              << "|";
    std::cout.width(10);
    std::cout << std::right << "NICKNAME"
              << "|";
    std::cout << "\n";
    while (y < i)
    {
        this->entries[y].ShowContact(y);
        std::cout << "\n";
        y++;
    }
    while (1)
    {
        std::cout << "PLEASE GIVE THE INDEX OF THE CONTACT YOU WISH TO LOOK AT : ";
        std::cin >> index;
        if (std::cin.good() == 0)
            return ;
        if (sscanf(index.c_str(), "%d", &y) != 1)
            y = -1;
        if (y > 0 && y < 9)
        {
            this->entries[y - 1].ShowFullContact();
            break;
        }
        else
            std::cout << "WRONG INPUT\n";
    }
}
