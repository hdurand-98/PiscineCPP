#ifndef SPAN_H
#define SPAN_H

#include <list>
#include <exception>

class Span
{
	public:
	Span(unsigned int N);
	Span(const Span &ref);
	~Span();
	Span &operator=(const Span &ref);

	int shortestSpan();
	int longestSpan();

	void addNumber(int nb);
	void addNumbers(unsigned nb);

	class FullExcept : public std::exception
	{
		virtual const char *what() const throw()
		{
			return ("The instance is full");
		}
	};

	class NoSpan : public std::exception
	{
		virtual const char *what() const throw()
		{
			return ("Not enough data to calculate span");
		}
	};

	private : 
	std::list<int> lst;
	unsigned int MaxSize;
};

#endif