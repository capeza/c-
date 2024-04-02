// 3. Объявите указатель на массив типа int и выделите память память для
// 12-ти элементов. Необходимо написать функцию, которая поменяет значения
// четных и нечетных ячеек массива.

#include <iostream>
#include <ctime>
using namespace std;
void change(int *link);
void show(int *link);
void fill(int *link);

int main()
{
    setlocale(LC_ALL, "Ru");
    srand(time(NULL));

    int size = 12;
    int arr[1];
    int *link = arr;
    link = new int[size];
    fill(link);
    show(link);
    change(link);
    show(link);
    return 0;
}

void fill(int *link)
{
    for (int i = 0; i < 12; ++i)
    {
        link[i] = rand() % 10;
    }
}

void show(int *link)
{
    for (int i = 0; i < 12; ++i)
    {
        cout << link[i] << " ";
    }
    cout << endl;
}

void change(int *link)
{
    int x{};
    for (int i = 0; i < 12; ++i)
    {
        if (i % 2 == 0)
        {
            x = link[i + 1];
            link[i + 1] = link[i];
            link[i] = x;
        }
    }
}
