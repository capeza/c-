#include <iostream>
using namespace std;

int main()
{
    setlocale (LC_ALL, "Ru");
    char a,b,c,d,e;
    cout<<"Введите слово состоящее из 5 букв"<<endl;
    cout<<"Первая буква: ";
    cin>>a;
    cout<<"Вторая буква: ";
    cin>>b;
    cout<<"Третья буква: ";
    cin>>c;
    cout<<"Четвертая буква: ";
    cin>>d;
    cout<<"Пятая буква: ";
    cin>>e;

    cout<<endl<<"Вы ввели слово: "<<a<<b<<c<<d<<e<<endl;
    return 0;
}
