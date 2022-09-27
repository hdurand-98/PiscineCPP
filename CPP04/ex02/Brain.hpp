#ifndef BRAIN_H
#define BRAIN_H
#include <string>

class Brain
{
	public:
	Brain();
	Brain(const Brain &ref);
	~Brain();
	Brain &operator=(const Brain &ref);

	std::string ideas[100];
};

#endif