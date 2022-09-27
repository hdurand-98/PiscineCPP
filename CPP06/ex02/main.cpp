#include "Base.hpp"
#include "A.hpp"
#include "B.hpp"
#include "C.hpp"

#include <time.h>
#include <stdlib.h>
#include <iostream>

Base *generate()
{
	srand(time(NULL));
	int i = rand() % 3 + 1;
	switch (i)
	{
		case 1:
			std::cout << "Secretely making an A\n";
			return (new A());
		case 2:
			std::cout << "Secretely making a B\n";
			return (new B());
		case 3:
			std::cout << "Secretely making a C\n";
			return (new C());
		default:
			return (NULL);
		}
}

void identify(Base *ptr)
{
	A *Aptr = dynamic_cast<A *>(ptr);
	if (Aptr == NULL)
	{
		B *Bptr = dynamic_cast<B *>(ptr);
		if (Bptr == NULL)
		{
			C *Cptr = dynamic_cast<C *>(ptr);
			if (Cptr == NULL)
			{
				std::cout << "Unknown type\n";
				return;
			}
			else
			{
				std::cout << "Identified with pointers : C\n";
				return;
			}
		}
		else
		{
			std::cout << "Identified with pointers : B\n";
			return;
		}
	}
	else
		std::cout << "Identified with pointers : A\n";
}

void identify(Base &ref)
{
	try
	{
		A& test = dynamic_cast<A &>(ref);
		(void)test;
		std::cout << "Identified with references : A\n";
	}
	catch(const std::bad_cast& bc)
	{
		try
		{
			B& test = dynamic_cast<B &>(ref);
			(void)test;
			std::cout << "Identified with references : B\n";
		}
		catch(const std::bad_cast& bc)
		{
			try
			{
				C& test = dynamic_cast<C &>(ref);
				(void)test;
				std::cout << "Identified with references : C\n";
			}
			catch(const std::bad_cast& bc)
			{
				std::cout << "Unknown type\n";
			}
		}	
	}
}

int main()
{
	Base *p = generate();
	Base &r = *p;

	identify(p);
	identify(r);
	return (0);
}
