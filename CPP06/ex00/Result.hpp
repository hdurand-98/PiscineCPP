#ifndef RESULT_H
#define RESULT_H

#include <string>
#include <iostream>
#include <cstdlib>

class Result
{
	public:
		Result();
		Result(const Result &ref);
		~Result();
		Result &operator=(const Result &ref);

		void ToInt(double nb);
		void ToChar(char nb);
		void ToFloat(double nb);
		void ToDouble(double nb);

	private:
		int i;
		char c;
		float f;
		double d;

		void FromInt();
		void FromChar();
		void FromFloat();
		void FromDouble();
};

#endif