#ifndef MUTANTSTACK_H
#define MUTANTSTACK_H

#include <stack>
#include <iterator>

template <typename T>
class MutantStack : public std::stack<T>
{
	public:
	MutantStack() {};
	MutantStack(const MutantStack<T> &ref) { *this = ref; };
	~MutantStack() {};
	MutantStack<T> &operator=(const MutantStack<T> &ref)
	{
		(void)ref;
		return (*this);
	}

	typedef typename std::stack<T>::container_type::iterator iterator;
	iterator begin()
	{
		return (this->c.begin());
	}

	iterator end()
	{
		return (this->c.end());
	}
};

#endif 