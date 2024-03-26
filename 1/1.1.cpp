// 1. Объявить переменные с помощью которых можно будет посчитать 
// общую сумму покупки нескольких товаров. Например плитки шоколада, 
// кофе и пакеты молока.

#include <iostream>
using namespace std;
int main()
{
    setlocale(LC_ALL, "ru");
    int amout_of_milk{3};
    int amout_of_chocolate{5};
    int amout_of_coffee{2};

    double in_total;

    double price_of_milk{63.99};
    double price_of_chocolate{50.98};
    double price_of_coffee{299.99};

    cout << "Количество молока: " << amout_of_milk << endl;
    cout << "Цена одного молока: " << price_of_milk << endl;
    cout << "Итого стоимость молока: " << price_of_milk * amout_of_milk << endl
         << endl;

    cout << "Количество шоколада: " << amout_of_chocolate << endl;
    cout << "Цена одного шоколада: " << price_of_chocolate << endl;
    cout << "Итого стоимость шоколада: " << price_of_chocolate * amout_of_chocolate << endl
         << endl;

    cout << "Количество кофе: " << amout_of_coffee << endl;
    cout << "Цена одного кофе: " << price_of_coffee << endl;
    cout << "Итого стоимость кофе: " << price_of_coffee * amout_of_coffee << endl
         << endl;


    cout<<"Итого чек: "<<price_of_milk * amout_of_milk+price_of_chocolate * amout_of_chocolate +price_of_coffee * amout_of_coffee;
    return 0;
}
