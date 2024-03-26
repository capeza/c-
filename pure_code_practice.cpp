#include <iostream>
using namespace std;

int calculateSomeDigits(int d1, int d2, char ch);

int main()
{
	setlocale(LC_ALL, "rus");

	int digit1 = 0;
	int digit2 = 0;
	int res = 0;
	char chVar = 0;

	cout << "1-е число: ";
	cin >> digit1;
	cout << "2-е число: ";
	cin >> digit2;
	cout << "Операция(+ или -): ";
	cin >> chVar;

	res = calculateSomeDigits(digit1, digit2, chVar);
	cout << "res = " << res << endl;

	return 0;
}

int calculateSomeDigits(int d1, int d2, char ch)
{
	if (ch == '+')
		return d1 + d2;
	if (ch == '-')
		return d1 - d2;
}