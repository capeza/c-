// 1) Создать двумерный массив 5х5, заполнить его случайными 
// числами от 10 до 99 и вывести на экран. Поменять местами 
// максимальный элемент каждой строки с первым элементом в 
// соответствующей строке. Задачу решить с помощью указателей.


#include <iostream>
#include<ctime>
using namespace std;

int main()
{
	setlocale(LC_ALL, "Ru");
	srand(time(NULL));

	int** arr = new int* [5];

	for (int i = 0; i < 5; ++i)
	{
		arr[i] = new int[5];
	}

	for (int i = 0, max{}, num_max{}; i < 5; ++i)
	{
		max = 0;
		num_max = 0;
		for (int j = 0; j < 5; ++j)
		{
			arr[i][j] = rand() % 89 + 10;
			if (arr[i][j] > max)
			{
				max = arr[i][j];
				num_max = j;
			}
		}
		swap(arr[i][0], arr[i][num_max]);
	}

	for (int i = 0; i < 5; ++i)
	{
		for (int j = 0; j < 5; ++j)
		{
			cout << arr[i][j] << " ";
		}
		cout << endl;
	}

	for (int i = 0; i < 5; ++i) {
		delete[] arr[i];
	}
	delete[] arr;

	return 0;
}