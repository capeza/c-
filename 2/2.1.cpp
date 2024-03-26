#include <iostream>
using namespace std;

int main()
{
    // Инициализация
    int a;
    char b;
    bool c;
    double d;

    // Ввод данных
    cout << "Введите целое число: ";
    cin >> a;
    cout << "Введите любой символ: ";
    cin >> b;
    cout << "Введите булевое число: ";
    cin >> c;
    cout << "Введите вещественное число: ";
    cin >> d;

    // Вывод данных
    cout << endl
         << "Целое число: "<< a << endl;
    cout << "Символ: " << b << endl;
    cout << "Булевое число: " << c << endl;
    cout << "Вещественное число: " << d << endl;
    return 0;
}
