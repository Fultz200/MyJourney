#include <iostream>
using namespace std;

inline double square(double a) { return a * a; }

int main()
{
	double a, b;
	double c = 2.0;
	a = square(5.0);
	b = square(++c);
	cout << a << endl << b << endl << c << endl;
	return 0;
}