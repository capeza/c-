#include <iostream>
using namespace std;

int main()
{
    setlocale (LC_ALL, "Ru");
    int a=3;
    int &x=a;
    cout<<x<<endl<<&x<<endl;
    int*y=&x;
    cout<<y<<endl<<*y<<endl<<&y;

    return 0;
}
