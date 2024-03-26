// 3. Объявить три массива. Первые два заполнить случайными значениями
// от 10 до 30. В элементы третьего массива записать сумму соответствующих
// элементов первых двух массивов. (в нулевую ячейку третьего – сумму
// нулевых ячеек первого и второго массивов и так далее). Затем найти
// среднее арифметическое элементов третьего массива, максимальное значение
// и минимальное значение, которые он хранит.

#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

int main()
{
    setlocale(LC_ALL, "Ru");
    srand(time(NULL));

    // объявление переменных
    const int number{15};
    float avg{}, max{}, min{30};
    int array_1[number];
    int array_2[number];
    int array_3[number];

    // заполнение массивов
    for (int i = 0; i < number; ++i)
    {
        array_1[i] = 10 + rand() % 20;
        array_2[i] = 10 + rand() % 20;
    }

   
    // заполнение третьего массива и расчет переменных
    for (int i = 0; i < number; ++i)
    {
        array_3[i] = array_1[i] + array_2[i];
        avg += array_3[i];
        array_3[i] > max ? max = array_3[i] : max;
        array_3[i] < min ? min = array_3[i] : min;
    }

    // вывод первого массива
    cout << "Первый массив: " << endl;
    for (int i = 0; i < number; ++i)
    {
        cout << array_1[i] << " ";
    }
    cout << endl;

    // вывод второго массива
    cout << "Второй массив: " << endl;
    for (int i = 0; i < number; ++i)
    {
        cout << array_2[i] << " ";
    }
    cout << endl;

    // вывод третьего массива
    cout << "Третий массив: " << endl;
    for (int i = 0; i < number; ++i)
    {
        cout << array_3[i] << " ";
    }
    cout << endl;

    // вывод высчитанных переменных
    cout << "Среднее значение переменных в третьем массиве равно: " << avg / number << endl;
    cout << "Максимальное значение в третьем массиве равно: " << max << endl;
    cout << "Минимальное значение в третьем массиве равно: " << min << endl;
    return 0;
}
