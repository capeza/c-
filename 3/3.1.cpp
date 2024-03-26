// 1. Распространённая задача:  Дано четырехзначное число (к примеру
// 5678), вывести на экран  в обратном порядке цифры из которых это
// число состоит. То есть мы должны увидеть на экране 8765. Подсказка:
// чтобы взять из числа отдельные цифры, надо применять  деление по
//  модулю на 10.

#include <iostream>
using namespace std;

int main()
{
    setlocale(LC_ALL, "Ru");

    int number, reverse_number{};
    cout << "Введите 4-х значное число: ";
    cin >> number;

    reverse_number += (number % 10) * 1000;
    number = number / 10;
    reverse_number += (number % 10) * 100;
    number = number / 10;
    reverse_number += (number % 10) * 10;
    number = number / 10;
    reverse_number += (number % 10);

    cout << "Это число на оборот: " << reverse_number << endl;

    return 0;
}
