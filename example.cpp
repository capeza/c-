#include <iostream>
using namespace std;

int main()
{
    setlocale (LC_ALL, "Ru");
    int x=2;
    int *y=&x;
    cout<<x<<endl<<*y<<endl;
    cout<<&x<<endl<<y<<endl;
    *y=3;
cout<<x<<endl<<*y<<endl;
cout<<&x<<endl<<y<<endl;
    return 0;
}
