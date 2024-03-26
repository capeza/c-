// 3. Задача посложней. Нарисовать равнобедренный треугольник из символов ^. 
// Высоту выбирает пользователь. Например: высота = 5, на экране


#include <iostream>
using namespace std;

int main()
{
    setlocale (LC_ALL, "Ru");
    int n;
    cout<<"Введите высоту треугольника: ";
    cin>>n;
    
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n*2-1; j++)
        {
            if (j+1>=n-i&&j+1<=n+i)
            {
                cout<<"^";
            }
            else{
                cout<<" ";
            }
            
        }
        cout<<endl;
    }
    
    return 0;
}
