#include "Span.hpp"
#include <iostream>
#include <iterator>
#include <stdlib.h>
#include <stdlib.h>
#include <time.h>

Span::Span(unsigned int N)
{
	MaxSize = N;
}

Span::Span(const Span &ref)
{
	lst = ref.lst;
	MaxSize = ref.MaxSize;
}

Span::~Span()
{

}

Span& Span::operator=(const Span &ref)
{
	lst = ref.lst;
	MaxSize = ref.MaxSize;
	return (*this);
}

int Span::shortestSpan()
{
	if (lst.size() < 2)
		throw NoSpan();

	std::list<int> tmp(lst);
	std::list<int>::iterator ptr = tmp.begin();
	int shortestSpan = -1;

	tmp.sort();
	int precValue = *tmp.begin();
	ptr = tmp.begin();
	ptr++;
	while(ptr != tmp.end())
	{
		if (abs(precValue - *ptr) < shortestSpan || shortestSpan < 0)
			shortestSpan = abs(precValue - *ptr);
		precValue = *ptr;
		ptr++;
	}
	return (shortestSpan);
}

int Span::longestSpan()
{
	if (lst.size() < 2)
		throw NoSpan();

	std::list<int> tmp(lst);
	tmp.sort();
	return (abs(*tmp.begin() - *tmp.rbegin()));
}

void Span::addNumber(int nb)
{
	if (lst.size() == MaxSize)
		throw FullExcept();
	lst.push_back(nb);
}

void Span::addNumbers(unsigned int nb)
{
	srand(time(NULL));
	for (unsigned int i = 0; i < nb; i++)
	{
		if (lst.size() == MaxSize)
			throw FullExcept();
		lst.push_back(rand() % 1000);
	}
}