#include <iostream>
using namespace std;

int main()
{
	char x = 'A', * p = &x;

	*p = 'B';

	cout << "Cont. da vari�vel: " << x << endl;
	cout << "Cont. apontado pelo ponteiro: " << *p << endl;

	return 0;
}