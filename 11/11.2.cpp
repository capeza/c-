// 2. Объявите указатель на массив типа double и предложите пользователю 
// выбрать его размер. Далее напишите четыре функции: первая должна 
// выделить память для массива, вторая  – заполнить ячейки данными, 
// третья – показать данные на экран, четвертая – освободить занимаемую 
// память.  Программа должна предлагать пользователю продолжать работу 
// (создавать новые динамические массивы ) или выйти из программы. 


#include <iostream>
#include <ctime>
using namespace std;

// определение функций
void new_memory(double *link, int size);
void fill_arr(double *link, int size);
void show_arr(double *link, int size);
void delete_memory(double *link);

int main()
{
    setlocale(LC_ALL, "Ru");
    srand(time(NULL));

    // задаём переменные
    int size{}, choose;
    double arr[1];
    double *link = arr;
    cout << "введите длину массива: ";
    cin >> size;

    // вызов функций
    while (choose != 0)
    {
        new_memory(link, size);
        fill_arr(link, size);
        show_arr(link, size);
        

        cout << "Для продолжения введите 1, для выхода 0: ";
        cin >> choose;
    }
    delete_memory(link);
    return 1;
}

// выполнение функций
void new_memory(double *link, int size)
{
    link = new double[size];
}

void fill_arr(double *link, int size)
{
    for (int i = 0; i < size; ++i)
    {
        link[i] = rand() % 89 + 10;
    }
}

void show_arr(double *link, int size)
{
    for (int i = 0; i < size; ++i)
    {
        cout << link[i] << " ";
    }
}

void delete_memory(double *link)
{
    delete[] link;
}