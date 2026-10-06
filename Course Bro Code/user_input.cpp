#include <iostream>

int main()
{
	std::string name;
	
	std::cout << "What's your name?: " << '\n';
	std::cin >> name; //storing input in the variable name
	
	std::cout << "Hello " << name;
	return 0;
}