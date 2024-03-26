#include <iostream>
using namespace std;

int main()
{
    setlocale (LC_ALL, "Ru");

    double a,b;
    cout<<"Enter a: ";
    cin>>a;
    cout<<"Enter b: ";
    cin>>b;

    cout<<"a = "<<a<<endl;
    cout<<"b = "<<b<<endl;
    cout<<"a*b = "<< a*b<<endl;
    cout<<"a+b = "<< a+b<<endl;
    cout<<"a-b = "<< a-b<<endl;
    cout<<"Average = "<< (a+b)/2<<endl<<endl;
    return 0;
}
