#include <iostream>
using namespace std;

int main()
{
	int a, b;
	float x0;
	cout << "Podaj wartosc 'a': ", cin >> a;
	cout << "Podaj wartosc 'b': ", cin >> b;
	
	if(a != 0)
	{
		x0 = - b / a;
		cout << "Miejsce zerowe to: " << x0;
	}
	
	else
	{
		cout << "Wartosc 'a' jest rowna 0";
	}
	
	return 0;
}
