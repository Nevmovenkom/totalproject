#include <iostream>
#include <string>
#include <iomanip>
int main()
{
	std::cout << "name:";
	std::string name;
	std::getline(std::cin, name);
	std::cout << name << "\n";
	std::cout << name.length() << "\n";
	std::cout << name[0] << "\n";
	std::cout << name.back();
}