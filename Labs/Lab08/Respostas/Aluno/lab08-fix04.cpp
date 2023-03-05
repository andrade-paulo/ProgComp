#include <iostream>
using namespace std;

int main()
{
	int bit[32] = {0,0,0,0,0,0,0,0,0,0,0,0,0,1,0,1,0,0,0,1,1,0,0,0,0,0,1,0,0,1,1};
	double exp = 0, mantissa = 0;
	bool sinal;

	for (int i = 0; i < 32; i++)
	{
		if (i < 23) {
			mantissa += bit[i] * 1/pow(2, i);
		}
		else if (i == 23) {
			if (bit[i]) { sinal = true; } else { sinal = false; }
		}
		else {
			exp += bit[i] * pow(2, 24 - i);
		}
	}

	cout << "mantissa: " << mantissa << endl << "exp: " << exp;

}

