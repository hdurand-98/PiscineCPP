#include <iostream>
#include <string>
#include "Phonebook.hpp"

int main()
{
    int i = 0;
    Phonebook phnbk;
    std::string input;

    std::cout << "HELLO, WHAT CAN I DO FOR YOU ? : ";
    std::cin >> input;
    while (input.compare("EXIT") != 0)
    {
        if (input.compare("ADD") == 0)
        {
            phnbk.ft_add(i);
            if (i < 8)
                i += 1;
        }
        else if (input.compare("SEARCH") == 0)
        {
            phnbk.ft_search(i);
        }
        if (std::cin.good() == 0)
            return (0);
        std::cout << "SOMETHING ELSE ? : ";
        std::cin >> input;
    }
    std::cout << "HAVE A GOOD DAY AND DON'T FORGET TO CHECK OUT ARDENT AZUR ON STEAM !\n";
    return (0);
}
