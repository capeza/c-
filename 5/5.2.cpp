// 2. Изменить код, который был рассмотрен в статье Оператор switch 
// в С++, следующим образом: Пользователю для расчета времени в пути 
// надо вводить не номера станций, а буквы (A,B,C,D,E). Необходимо 
// предусмотреть ввод пользователем и маленьких, и больших букв 
// (избавиться от регистрозависимости).  То есть если введено 
// или D, или d – должен сработать один и тот же case.  Синтаксис 
// для этого действия такой:


#include <iostream>
using namespace std;

int main()
{
    setlocale(LC_ALL, "rus");

    char answer;  // будет хранить выбор пользователя
    bool var = true; // управляющая переменная цикла do while

    cout << "Введите букву станции метро, для расчета времени в пути (a,b,c,d,e): ";

    do
    {
        cin >> answer; 

        switch (answer) 
        {
        case 'A':
        case 'a': 
            cout << "Станция метро Trinitat Nova: ";
            cout << "Время в пути - 15 мин." << endl;
            break; 
        case 'B':
        case 'b':
            cout << "Станция метро Casa de l’Aigua: ";
            cout << "Время в пути - 19 мин." << endl;
            break;
        case 'C':
        case 'c':
            cout << "Станция метро Torre Baro Vallbona: ";
            cout << "Время в пути - 25 мин." << endl;
            break;
        case 'D':
        case 'd':
            cout << "Станция метро Ciutat Meridiana: ";
            cout << "Время в пути - 30 мин." << endl;
            break;
        case 'E':
        case 'e':
            cout << "Станция метро Can Cuias: ";
            cout << "Время в пути - 38 мин." << endl;
            break;
        default: 
            cout << "Станции под номером " << answer << " нет! ";
            cout << "Сделайте правильный выбор (a,b,c,d,e): ";
        }
        if ((answer >= 65 && answer <= 69)||(answer >= 97 && answer <= 101))
            var = false;
    } while (var); 

    return 0;
}