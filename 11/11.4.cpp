// 4.  Объявить и заполнить двумерный динамический массив случайными 
// числами от 10 до 50. Показать его на экран. Для заполнения и показа на 
// экран написать отдельные функции. (подсказка: функции должны принимать 
// три параметра – указатель на динамический массив, количество строк, 
// количество столбцов).  Количество строк и столбцов выбирает пользователь.
#include <iostream>
#include <ctime>
using namespace std;

int** fill(int* arr, int row,int col);
int show(int* arr, int row,int col);
int main()
{
    setlocale (LC_ALL, "Ru");
    srand(time(NULL));

    int row{},col{};
    cout<<"Введите количество строк: ";
    cin>>row;
    cout<<"Введите количество колон: ";
    cin>>col;

    int *arr[col]={};
    int arr2[row];

for (int i = 0; i < row; i++)

{
    
    *arr[i]=**fill(*arr,row,col);
}

    
    show(*arr, row, col);
    return 0;
}

int **fill(int* arr, int row,int col){
    for (int j = 0; j < col; j++)
    {
        arr[j]=rand()%40+10;
    }
}

int show(int* arr, int row,int col){
    for (int i = 0; i < col; i++)
    {
        cout<<arr[i]<<" ";
    }
    
}