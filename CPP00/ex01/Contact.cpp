#include "Contact.hpp"
#include <iostream>

Contact::Contact()
{
}

Contact::~Contact()
{
}

void Contact::SetContact()
{
    std::cout << "FIRST NAME : ";
    std::cin.ignore();
    std::getline(std::cin, this->first_name);
    std::cout << "LAST NAME : ";
    std::getline(std::cin, this->last_name);
    std::cout << "NICKNAME : ";
    std::getline(std::cin, this->nickname);
    std::cout << "PHONE NUMBER : ";
    std::getline(std::cin, this->phone_num);
    std::cout << "DARKEST SECRET : ";
    std::getline(std::cin, this->darkest_secret);
}

std::string DisplayString(std::string str)
{
    std::string name;
    if (str.length() > 10)
    {
        name = str.substr(0, 10);
        name.back() = '.';
    }
    else
        name = str;
    return (name);
}

void Contact::ShowContact(int i)
{
    std::cout.width(10);
    std::cout << std::right << std::to_string(i + 1) << "|";
    std::cout.width(10);
    std::cout << std::right << DisplayString(this->first_name) << "|";
    std::cout.width(10);
    std::cout << std::right << DisplayString(this->last_name) << "|";
    std::cout.width(10);
    std::cout << std::right << DisplayString(this->nickname) << "|";
}

void Contact::ShowFullContact()
{
    if (this->first_name.length() == 0)
        std::cout << "ENTRY DOESN'T EXIST\n";
    else
    {
        std::cout << "FIRST NAME : " << this->first_name << std::endl;
        std::cout << "LAST NAME : " << this->last_name << std::endl;
        std::cout << "NICKNAME : " << this->nickname << std::endl;
        std::cout << "PHONE NUMBER : " << this->phone_num << std::endl;
        std::cout << "DARKEST SECRET : " << this->darkest_secret << std::endl;
    }
}
