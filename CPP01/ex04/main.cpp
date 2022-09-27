#include <string>
#include <iostream>
#include <fstream>
#include <sstream>

int main(int ac, char **av)
{
	if (ac != 4)
	{
		std::cout << "Wrong number of arguments !\n";
		return (0);
	}
	std::string RemoveString(av[2]);
	std::string AddString(av[3]);
	std::string FileName(av[1]);

	if (RemoveString.length() == 0 || AddString.length() == 0 || FileName.length() == 0)
	{
		std::cout << "Wrong arguments\n";
		return (0);
	}

	if (RemoveString == AddString)
	{
		std::ifstream src(FileName);
		std::ofstream dest(FileName.append(".replace"));
		std::stringstream strstream;
	   	strstream << src.rdbuf();
		dest << strstream.str();
		src.close();
		dest.close();
		return (0);
	}

	std::ifstream src(FileName);
	std::stringstream strstream;
	strstream << src.rdbuf();
	std::string strbase = strstream.str();
	src.close();

	std::size_t found = strbase.find(av[2]);
	while (found != std::string::npos)
	{
		strbase.erase(found, RemoveString.length());
		strbase.insert(found, AddString);
		found = strbase.find(av[2]);
	}
	std::ofstream dest(FileName.append(".replace"));
	dest << strbase;
	dest.close();
	return (0);
}
