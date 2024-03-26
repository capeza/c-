// 1. Объявить два целочисленных массива  с разными размерами и 
// написать функцию, которая заполняет их элементы значениями и 
// показывает на экран. Функция должна принимать два параметра – 
// массив и его размер.

#include <iostream>
using namespace std;

void show_array(int arr[100], int size);

int main()
{
    setlocale(LC_ALL, "Ru");
    // создаём переменные и просим ввести длину массива
    int array_1[100], array_2[100];
    int size_1{}, size_2{};
    cout << "Введите размер первого массива:";
    cin >> size_1;
    cout << "Введите размер второго массива:";
    cin >> size_2;

    // вызываем функции
    show_array(array_1, size_1);
    show_array(array_2, size_2);
    return 0;
}

// функция заполняем массив и выводит его
void show_array(int arr[100], int size)
{
    for (int i = 0; i < size; ++i)
    {
        arr[i] = i;
        cout << arr[i] << " ";
    }
    cout << endl;
}