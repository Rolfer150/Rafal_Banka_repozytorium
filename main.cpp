#include <iostream>
using namespace std;

int main()
{
	float a, b, x0;
	cout << "Podaj wartosc 'a': ", cin >> a;
	cout << "Podaj wartosc 'b': ", cin >> b;
	
	x0 = - b / a;
	cout << "Miejsce zerowe to: " << x0;
		
	return 0;
}
