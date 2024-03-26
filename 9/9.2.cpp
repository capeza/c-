// 2. Заполнить массив из 50-ти элементов нечётными числами от 1 до 99.
// (используйте операцию остаток от деления, чтобы проверить число на
// чётность)

#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

int main()
{
    setlocale(LC_ALL, "Ru");
    srand(time(NULL));

    // Заполнение массива
    const int number = 50;
    int array[number];
    for (int i = 0; i < number; ++i)
    {
        array[i] = rand() % 99;
        if (array[i] % 2 == 0)--i;
        else{cout << array[i] << " ";}
    }
    return 0;
}
