// 2. ќбъ€вите указатель на массив типа double и предложите пользователю 
// выбрать его размер. ƒалее напишите четыре функции: перва€ должна 
// выделить пам€ть дл€ массива, втора€  Ц заполнить €чейки данными, 
// треть€ Ц показать данные на экран, четверта€ Ц освободить занимаемую 
// пам€ть.  ѕрограмма должна предлагать пользователю продолжать работу 
// (создавать новые динамические массивы ) или выйти из программы. 


#include <iostream>
#include <ctime>
using namespace std;

// определение функций
void new_memory(double*& link, int size);
void fill_arr(double* link, int size);
void show_arr(double* link, int size);
void delete_memory(double* link);

int main()
{
    setlocale(LC_ALL, "Ru");
    srand(time(NULL));

    // задаЄм переменные
    int size{}, choose=1;
    double arr[1];
    double* link = arr;
    cout << "введите длину массива: ";
    cin >> size;

    // вызов функций
    while (choose != 0)
    {
        new_memory(link, size);
        fill_arr(link, size);
        show_arr(link, size);
        delete_memory(link);

        cout << "ƒл€ продолжени€ введите 1, дл€ выхода 0: ";
        cin >> choose;
    }
    
    return 1;
}

// выполнение функций
void new_memory(double*& link, int size)
{
    link = new double[size];
}

void fill_arr(double* link, int size)
{
    for (int i = 0; i < size; ++i)
    {
        link[i] = rand() % 89 + 10;
    }
}

void show_arr(double* link, int size)
{
    for (int i = 0; i < size; ++i)
    {
        cout << link[i] << " ";
    }
}

void delete_memory(double* link)
{
    delete[] link;
}