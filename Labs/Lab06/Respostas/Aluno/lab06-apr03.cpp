#include <iostream>

int main()
{
	short x = 1;
	x = x + 3;
	std::cout << "x = " << x << std::endl;

	int y = 2'147'483'647;
	y = y - 2'000'000'000;
	std::cout << "y = " << y << std::endl;
}
