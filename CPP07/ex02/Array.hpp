#ifndef ARRAY_H
#define ARRAY_H

#include <stdexcept>

template <typename T>
class Array
{
private:
	T *tab;
	unsigned int tab_size;

public:
	Array()
	{
		tab = NULL;
		tab_size = 0;
	}
	Array(unsigned int n)
	{
		tab = new T[n];
		tab_size = n;
	}
	Array(const Array &ref)
	{
		tab = new T[ref.size()];
		for (unsigned int i = 0; i < ref.size(); i++)
			tab[i] = ref.tab[i];
		tab_size = ref.size();
	}
	~Array()
	{
		if (tab_size != 0)
			delete [] tab;
	}
	Array &operator=(const Array &ref)
	{
		if (tab_size != 0)
			delete [] tab;
		tab = new T[ref.size()];
		for (unsigned int i = 0; i < size(); i++)
			tab[i] = ref.tab[i];
		tab_size = ref.size();
		return (*this);
	}

	T &operator[](unsigned int idx) throw( std::out_of_range )
	{
		if (idx < 0 || idx >= tab_size)
			throw std::out_of_range("index is out of range");
		return (tab[idx]);
	}

	unsigned int size() const {return (tab_size);};
};

#endif
