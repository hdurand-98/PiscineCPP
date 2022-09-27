#include <stack>
#include <list>
#include "MutantStack.hpp"
#include <iostream>
#include <iterator>

int main()
{
	std::cout << "Test avec une List\n";
	std::list<int> lstack;
	lstack.push_back(5);
	lstack.push_back(17);
	std::cout << "contains 17 and 5, show the first : " << *lstack.begin() << std::endl;
	lstack.pop_back();
	std::cout << "retire 17, affiche la taille du container : " << lstack.size() << std::endl;
	lstack.push_back(3);
	lstack.push_back(5);
	lstack.push_back(737);
	//[...]
	lstack.push_back(0);
	std::list<int>::iterator lit = lstack.begin();
	std::list<int>::iterator lite = lstack.end();
	++lit;
	--lit;
	std::cout << "Itère à travers la liste :\n";
	while (lit != lite)
	{
		std::cout << *lit << std::endl;
		++lit;
	}

	std::cout << "Test avec MutantStack\n";
	MutantStack<int> mstack;
	mstack.push(5);
	mstack.push(17);
	std::cout << "contains 17 and 5, show the first : " << mstack.top() << std::endl;
	mstack.pop();
	std::cout << "retire 17, affiche la taille du container : " << mstack.size() << std::endl;
	mstack.push(3);
	mstack.push(5);
	mstack.push(737);
	//[...]
	mstack.push(0);
	MutantStack<int>::iterator it = mstack.begin();
	MutantStack<int>::iterator ite = mstack.end();
	++it;
	--it;
	std::cout << "Itère à travers la stack :\n";
	while (it != ite)
	{
		std::cout << *it << std::endl;
		++it;
	}
	std::stack<int> s(mstack);
	return 0;
}