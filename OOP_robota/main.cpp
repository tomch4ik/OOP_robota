#include <iostream>
using namespace std;

int plusa(int a, int b)
{
	int result = a + b;
	return result;
}
int minusu(int a, int b)
{
	int result = a - b;
	return result;
}
int mnozyt(int a, int b)
{
	int result = a * b;
	return result;
}
int delit(int a, int b)
{
	int result = a / b;
	return result;
}

int main()
{
	int a, b;
	cout << "Input number a and number b" << endl;
	cin >> a >> b;
	cout << "a + b = " << plusa(a, b) << endl;
	cout << "a - b = " << minusu(a, b) << endl;
	cout << "a * b = " << mnozyt(a, b) << endl;
	cout << "a / b = " << delit(a, b) << endl;
}