#include <iostream>
#include <cstring>
using namespace std;

char *giveNewMem(char *pstr1, int reqSize);

int main()
{
	setlocale(LC_ALL, "rus");

	int strSize1 = strlen("строка 1 ") + 1;
	int strSize2 = strlen("+ строка 2") + 1;

	char *pStr1 = new char[strSize1];
	strcpy(pStr1, "строка 1 ");

	char *pStr2 = new char[strSize2];
	strcpy(pStr2, "+ строка 2");

	cout << "1)" << pStr1 << endl;
	cout << "2)" << pStr2 << endl
		 << endl;

	cout << "pStr1 занимает " << strSize1 << " байт памяти с \\0" << endl;
	cout << "pStr2 занимает " << strSize2 << " байт памяти с \\0" << endl;

	int requiredSize = (strSize1 + strSize2) - 1;
	cout << "\nНеобходимо " << requiredSize << " байт памяти для объединения строк." << endl
		 << endl;

	pStr1 = giveNewMem(pStr1, requiredSize);

	strcat(pStr1, pStr2);
	cout << "pStrq: " << pStr1 << endl
		 << endl;

	delete[] pStr1;
	delete[] pStr2;

	return 0;
}

char *giveNewMem(char *pstr1, int reqSize)
{
	char *strInFunc = new char[reqSize];

	strcpy(strInFunc, pstr1);

	delete[] pstr1;

	return strInFunc;
}
