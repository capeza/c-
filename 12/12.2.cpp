// 2) Задача на умножение матриц. Пользователь произвольно задает 
// размерность двух матриц и заполняет значениями вручную. Не 
// забывайте, что необходимо выделить соответствующие участки 
// памяти для матриц, которые будет заполнять пользователь и для 
// третьей итоговой матрицы. Далее отобразите на экране обе 
// заполненные матрицы и итоговую матрицу (их воспроизведение).


#include <iostream>
using namespace std;

void new_space(int **arr, int line, int col);
void fill(int **arr, int line, int col);
void show(int **arr, int line, int col);

int main()
{
    setlocale(LC_ALL, "Ru");

    int x, z, y;
    cout << "Введите количество строк первой матрицы: ";
    cin >> x;
    cout << "Введите количество столбцов первой матрицы и количество строк второй матрицы: ";
    cin >> z;
    cout << "Введите количество столбцов второй матрицы: ";
    cin >> y;

    int** arr1 = new int* [x];
    new_space(arr1,x,z);

    int** arr2 = new int* [z];
    new_space(arr2,z,y);
    
    int** arr_sum=new int*[x];
    new_space(arr_sum,x,y);
    
    fill(arr1,x,z);
    fill(arr2,z,y);
    show(arr1,x,z);
    show(arr2,z,y);

    for (int k = 0; k < x; ++k)
    {
        for (int i = 0; i < y; ++i)
        {
            int num = 0;
            for (int j = 0; j < z; ++j)
            {
                num += arr1[k][j] * arr2[j][i];
            }
            arr_sum[k][i] = num;
        }
    }
    show(arr_sum,x,y);

    
    return 0;
}

void new_space(int **arr, int line, int col){
    
    for (int i = 0; i < line; ++i)
    {
        arr[i] = new int[col];
    }
}

void fill(int **arr, int line, int col){
    for (int i = 0; i < line; ++i)
    {
        for (int j = 0; j <col; ++j)
        {
            cout<<"Введите элемент матрицы. Строка: "<<i+1<<" Столбец: "<<j+1<<endl;
            cin>>arr[i][j];
        }
    }
    cout<<endl;
}

void show(int **arr, int line, int col){
for (int i = 0; i < line; ++i)
    {
        for (int j = 0; j < col; ++j)
        {
            cout<<arr[i][j]<<" ";
        }
        cout<<endl;
    }
    cout<<endl;
}