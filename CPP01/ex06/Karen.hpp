#ifndef KAREN_H
#define KAREN_H
#include <string>

class Karen
{
	public:
		Karen();
		~Karen();

		void complain(std::string level);

	private:
		void debug();
		void info();
		void warning();
		void error();
};
#endif