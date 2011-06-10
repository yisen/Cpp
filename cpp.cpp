#include <iostream>
#include <string>
int main(int argc, char *argv[])
{
	enum cmdlist
	{
		OPEN,
		CLOSE
	};

	int i;
	for (i = 0; i < 1000; i++)
{

	std::string strn = "yisen";
	std::cout << strn.size();

	std::cout << CLOSE << " and " << OPEN << "\v" << std::endl;
	std::cout << "char: " << sizeof(char) << std::endl;
	std::cout << "int: " << sizeof(int) << std::endl;
	std::cout << "short int: " << sizeof(short int) << std::endl;
	std::cout << "long int: " << sizeof(long int) << std::endl;
	std::cout << "float: " << sizeof(float) << std::endl;
	std::cout << "double: " << sizeof(double) << std::endl;
	std::cout << "wchar_t: " << sizeof(wchar_t) << std::endl;
	std::cout << "bool: " << sizeof(bool) << std::endl;
}
	return 0;
}
