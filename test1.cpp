#include <iostream>
int main()
{
	int x = 5;
	std::cout << x;
	//std::cout is same as printf in C
	std::cout << std::endl;
	//"<< std::endl" for changing lines 
	std::cout << x << std::endl;
	//"<< std::endl" for changing lines
	std::cout << "Hello" << std::endl;
	//double " is required when printing strings
	x = x + 3;
	std::cout << x << std::endl;
	int y;
	y = x;
	std::cout << y << std::endl;
}
