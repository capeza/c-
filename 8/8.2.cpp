// 2) Объявить двумерный массив и заполнить его построчно с клавиатуры.
// После заполнения – показать заполненную матрицу на экран и посчитать
// сумму элементов отдельно в каждом столбце и каждой строке.

#include <iostream>
using namespace std;

int main()
{
    setlocale(LC_ALL, "Ru");

    // Объявление переменных, ввод размерности массива
    int array[100][100];
    int line, col, line_sum{}, col_sum{};
    cout << "Введите размерность массива, количество строк: ";
    cin >> line;
    cout << "количество колонн: ";
    cin >> col;

    // заполнение массива
    for (int i = 0; i < line; ++i)
    {
        for (int j = 0; j < col; ++j)
        {
            cout << "Введите значение элемента массива строки: " << i + 1 << " колонны: " << j + 1 << endl;
            cin >> array[i][j];
        }
    }
    cout << endl;

    // вывод массива с подсчетом данных
    for (int i = 0; i < line; ++i)
    {
        for (int j = 0; j < col; ++j)
        {
            cout << array[i][j] << " ";
            line_sum += array[i][j];

            if (i == j)
            {
                for (int k = 0; k < line; ++k)
                {
                    col_sum += array[k][i];
                }
            }
        }
        cout << "Сумма " << i + 1 << " строки равна: " << line_sum << " Сумма " << i + 1 << " колонны равна: " << col_sum << endl;

        col_sum = 0;
        line_sum = 0;
    }

    return 0;
}
