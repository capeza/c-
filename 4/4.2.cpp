// 2.  Пользователь вводит порядковый номер пальца руки. Необходимо
// показать его название на экран.

#include <iostream>
using namespace std;

int main()
{
    setlocale(LC_ALL, "Ru");

    int number_of_finger;
    cout << "Введите номер пальца: ";
    cin >> number_of_finger;
    if (number_of_finger > 5 || number_of_finger < 0)
    {
        cout << "Вы ввели не верное число!";
    }
    else if (number_of_finger == 1)
    {
        cout << "Мезинец";
    }
    else if (number_of_finger == 2)
    {
        cout << "Безымянный";
    }
    else if (number_of_finger == 3)
    {
        cout << "Средний";
    }
    else if (number_of_finger == 4)
    {
        cout << "Указательный";
    }
    else if (number_of_finger == 5)
    {
        cout << "Большой";
    }

    return 0;
}
