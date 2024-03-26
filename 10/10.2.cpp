// 2. Необходимо создать двумерный массив 5 х 5. Далее написать 
// функцию, которая заполнит его случайными числами от  30 до 60.
//  Создать еще две функции, которые находят максимальный и 
//  минимальный элементы этого двумерного массива. (О генерации 
//  случайных чисел есть отдельная статья)

#include <iostream>
#include <ctime>
using namespace std;

// инициализация функциц
int fill(int array[5][5], int size);
void max(int array[5][5], int size);
void min(int array[5][5], int size);

// создание массива и вызов функций
int main()
{
    setlocale(LC_ALL, "Ru");
    srand(time(NULL));
    int array[5][5];

    fill(array, 5);
    max(array, 5);
    min(array, 5);
    return 0;
}

// заполнение и вывод массива
int fill(int array[5][5], int size)
{
    for (int i = 0; i < size; ++i)
    {
        for (int j = 0; j < size; ++j)
        {
            array[i][j] = rand() % 30 + 30;
            cout << array[i][j] << " ";
        }
        cout << endl;
    }
    return array[5][5];
}

// нахождение максимального значения в массиве
void max(int array[5][5], int size)
{
    int max{};
    for (int i = 0; i < size; ++i)
    {
        for (int j = 0; j < size; ++j)
        {
            array[i][j] > max ? max = array[i][j] : max = max;
        }
    }
    cout << "Наибольшее число в массиве равно: " << max << endl;
}

// нахождение наименьшего значения в массиве
void min(int array[5][5], int size)
{
    int min{60};
    for (int i = 0; i < size; ++i)
    {
        for (int j = 0; j < size; ++j)
        {
            array[i][j] < min ? min = array[i][j] : min = min;
        }
    }
    cout << "Наименьшее число в массиве равно: " << min;
}