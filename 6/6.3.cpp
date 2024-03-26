//  3. На складе имеется определённое количество ящиков с
//  яблоками (в нашем примере 15). Когда подъезжает машина для
//  погрузки, попросить пользователя ввести, сколько ящиков
//  загрузить в первую машину,  во вторую и так далее, пока не
//  закончатся ящики с яблоками. Предусмотреть тот случай, когда
//  пользователь введёт количество ящиков больше, чем есть на складе.

#include <iostream>
using namespace std;

int main()
{
    setlocale(LC_ALL, "Ru");
    int number_of_box{};
    cout << "Введите количество ящиков: ";
    cin >> number_of_box;

    for (int car_number = 0, box_to_ship = 0; number_of_box != 0; ++car_number)
    {
        cout << "Введите количество ящиков, которые будут загруженны в машину под номером: " << car_number + 1 << endl;
        cin >> box_to_ship;
        if (box_to_ship > number_of_box)
        {
            cout << "Вы ввели количество ящиков больше, чем есть на складе!\n";
            box_to_ship = 0;
            car_number--;
        }
        else if (box_to_ship <= number_of_box)
        {
            number_of_box -= box_to_ship;
            cout << "В " << car_number + 1 << " машину было загруженно " << box_to_ship << " ящиков. На складе осталось " << number_of_box << " ящиков\n";
        }
    }
    return 0;
}
