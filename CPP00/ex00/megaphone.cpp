#include <cctype>
#include <iostream>
#include <cstring>

int main(int ac, char **av)
{
    int i = 1;
    char c;

    if (ac == 1)
        std::cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *\n";
    else
    {
        while (av[i])
        {
            for (int y = 0; (size_t)y < strlen(av[i]); y++)
            {
                c = toupper(av[i][y]);

                std::cout << c;
            }
            if (i == ac - 1)
                std::cout << "\n";
            i++;
        }
    }
    return (0);
}