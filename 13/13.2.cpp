// 2. Определить класс Children, который содержит такие поля (члены класса): 
// закрытые – имя ребенка, фамилию и возраст , публичные – методы ввода 
// данных и отображения их на экран. Объявить два объекта класса, внести 
// данные и показать их.

#include <iostream>
#include <string>
using namespace std;

class Children{
    string first_name, last_name;
    int age;
    public:
    void addData(){
        cout<<"Enter name: ";
        cin>>first_name;
        cout<<"Enter last name: ";
        cin>>last_name;
        cout<<"Enter age: ";
        cin>>age;
    }

    void showData(){
        cout<<first_name<<" "<<last_name<<" "<<age<<"'s old"<<endl;
    }
};

int main()
{
    setlocale (LC_ALL, "Ru");
    
    Children first;
    Children second;

    first.addData();
    second.addData();

    first.showData();
    second.showData();

    return 0;
}
