// 3. Преобразовать строки двумерного массива в столбцы.
// Класс будет содержать два метода: один заполнит массив значениями, 
// второй произведет замену значений строк на значения столбцов.

#include <iostream>
#include <ctime>
using namespace std;

class array
{
public:
    int line, col;
    int arr[20][20]={};
    void fill()
    {
        cout << "Enter line amount: ";
        cin >> line;
        cout << "Enter col amount: ";
        cin >> col;
        for (int i = 0; i < line; ++i)
        {
            for (int j = 0; j < col; ++j)
            {
                arr[i][j] = rand() % 9+1;
            }
        }
    }

    void show()
    {
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

    void change()
    {
        for (int i = 0; i < col; ++i)
        {
            for (int j = 0; j < line; ++j)
            {
                if (i!=j&&i>=1&&j<i)
                {
                    swap(arr[i][j],arr[j][i]);
                }
            }
        }
        swap(col,line);
    }
};

int main()
{
    setlocale(LC_ALL, "Ru");
    srand(time(NULL));

    array matrix;
    matrix.fill();
    matrix.show();
    matrix.change();
    matrix.show();
    return 0;
}
