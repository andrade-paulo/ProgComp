#include <iostream>
using namespace std;

int main()
{
	float torque[10] = { 2.5, 8.1, 3.4, 9.2, 5.7, 9.6, 6.3, 8.0, 5.4, 4.9 };
	float* p;

	p = &torque[0];
	cout << "Primeiro: " << *p << endl;
	
	p = &torque[9];
	cout << "Ultimo: " << *p;

	return 0;
}