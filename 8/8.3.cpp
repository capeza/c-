// 3) Заполнить двумерный массив случайными  числами от 10  до 100. Посчитать 
// сумму элементов отдельно в каждой строке и определить номер строки,  в 
// которой эта сумма максимальна.

#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

int main()
{
    setlocale(LC_ALL, "Ru");
    srand(time(NULL));

    // Объявление переменных, ввод размерности массива
    int array[100][100];
    int line, col, line_sum{}, line_max{}, line_max_number{};
    cout << "Введите размерность массива, количество строк: ";
    cin >> line;
    cout << "количество колонн: ";
    cin >> col;

    // заполнение массива
    for (int i = 0; i < line; ++i)
    {
        for (int j = 0; j < col; ++j)
        {
            array[i][j]=10+rand()%90;
        }
    }
    cout << endl;

    // вывод массива
    for (int i = 0; i < line; ++i)
    {
        for (int j = 0; j < col; ++j)
        {
            cout << array[i][j]<<" ";
            line_sum += array[i][j];
        }
        if (line_sum>=line_max)
        {
            line_max=line_sum;
            line_max_number=i+1;
        }
        
        cout << "Сумма " << i + 1 << " строки равна: " << line_sum;
        line_sum = 0;
        cout << endl;
    }
    cout << endl;
    cout<<"Сумма максимальной строки ровна: "<<line_max<<endl;
    cout<<"Номер максимальной строки: "<<line_max_number;
    return 0;
}
