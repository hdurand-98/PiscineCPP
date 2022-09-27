#include <iostream>
#include <Array.hpp>
#include <stdlib.h>
#include <time.h>

#define MAX_VAL 750
int main(int, char**)
{
    Array<int> numbers(MAX_VAL);
    int* mirror = new int[MAX_VAL];
    srand(time(NULL));
    std::cout << "Creation d'array d'ints aléatoires\n";
    for (int i = 0; i < MAX_VAL; i++)
    {
        const int value = rand();
        numbers[i] = value;
        mirror[i] = value;
    }
    //SCOPE
    {
        std::cout << "Test des deep copies\n";
        Array<int> tmp = numbers;
        std::cout << "adresse tmp[0] = " << &tmp[0] << " adresse numbers[0]" << &numbers[0] << std::endl;
        Array<int> test(tmp);
        std::cout << "adresse test[0] = " << &test[0] << " adresse tmp[0]" << &tmp[0] << std::endl;
    }
    std::cout << "Une différences entre les arrays existe-t-elle ? : ";
    for (int i = 0; i < MAX_VAL; i++)
    {
		//std::cout << "Comparing value number " << i << " : Mine = " << numbers[i] << " Their's = " << mirror[i] << std::endl;
        if (mirror[i] != numbers[i])
        {
            std::cerr << "Différence détectée !\n";
            return 1;
        }
    }
    std::cout << "Aucune différence détectée, tout roule\n";
    try
    {
        std::cout << "Tentative d'accès à l'index -2\n";
        numbers[-2] = 0;
    }
    catch(const std::exception& e)
    {
        std::cerr << e.what() << '\n';
    }
    try
    {
        std::cout << "Tentative d'accès à l'index Max + 1\n";
        numbers[MAX_VAL] = 0;
    }
    catch(const std::exception& e)
    {
        std::cerr << e.what() << '\n';
    }

    for (int i = 0; i < MAX_VAL; i++)
    {
        numbers[i] = rand();
    }
    delete [] mirror;
    return 0;
}
