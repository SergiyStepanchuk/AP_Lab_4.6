#include <iostream>
#include <cmath>
using namespace std;


int main() {
	const int count = 25;

	double m, b;
	int i, k;

	i = 5;
	b = 0;
	while (i <= count) {
		
		k = 1;
		m = 1;
		while (k <= pow(i, 2)) {
			m *= k;
			k++;
		}
		
		b += sqrt(pow(i, 2) + m) / i;
		i++;
	}
	cout << b << endl << endl;

	i = 5;
	b = 0;
	do {

		k = 1;
		m = 1;
		do {
			m *= k;
			k++;
		} while (k <= pow(i, 2));
		b += sqrt(pow(i, 2) + m) / i;
		i++;
	} while (i <= count);
	cout << b << endl;

	
	for (b = 0,i = 5; i <= count; i++)
	{
		for (m = 1, k = 1; k <= pow(i, 2); k++)
			m *= k;
		b += sqrt(pow(i, 2) + m) / i;
	}
	cout << b << endl;

	for (b = 0, i = count; i >= 5; i--)
	{
		for (m = 1, k = pow(i, 2); k >= 1 ; k--)
			m *= k;
		b += sqrt(pow(i, 2) + m) / i;
	}
	cout << b << endl;
	
	return 0;
}
