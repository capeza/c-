// 2. В спортзал ежедневно приходит какое-то количество посетителей.
// Необходимо предложить пользователю ввести такие данные: сколько
// человек посетило спортзал за день, ввести возраст каждого
// посетителя и в итоге показать возраст самого старшего и самого
// молодого из них, а так же посчитать средний возраст посетителей.

#include <iostream>
using namespace std;

int main()
{
    setlocale(LC_ALL, "Ru");
    float x, max{}, min{150}, avg{};
    cout << "Введите количество посетителей: ";
    cin >> x;

    for (int i = 0; i < x; i++)
    {
        int y;
        cout << "Введите возраст посетителя под номером " << i + 1 << " :";
        cin >> y;
        avg += y;
        min = (min > y) ? y : min;
        max = (max < y) ? y : max;
    }
    
    cout << "Самому старшему посетителю: " << max << " лет\n";
    cout << "Самому младшему посетителю: " << min << " лет\n";
    cout << "Средний возраст посетилея равен: " << avg / x << endl
         << endl;
    return 0;
}
