#include <iostream>
#include <stdlib.h>
#include <string>
using namespace std;
struct Size
{
    int breast;
    int waist;
    int hips;
};

struct WonderfulWoman
{
    string name{};
    int age;
    int height;
    int weight;
    Size volume;
    bool engKnowledge;
};

void showData(WonderfulWoman &Obj);
void fill(WonderfulWoman &Obj);

int main()
{
    setlocale(LC_ALL, "rus");

    WonderfulWoman firstWoman = {};
    WonderfulWoman secondWoman = {};
    WonderfulWoman thirdWoman = {};

    fill(firstWoman);
    fill(secondWoman);
    fill(thirdWoman);

    showData(firstWoman);
    showData(secondWoman);
    showData(thirdWoman);
    
    return 0;
}

void fill(WonderfulWoman &Obj){
    cout<<"Введите имя: ";
    cin>>Obj.name;
    cout<<"Введите возраст: ";
    cin>>Obj.age;
    cout<<"Введите рост: ";
    cin>>Obj.height;
    cout<<"Введите вес: ";
    cin>>Obj.weight;
    cout<<"Английский (1 - да, 0 - нет): ";
    cin>>Obj.engKnowledge;

    cout<<"Введите охват груди: ";
    cin>>Obj.volume.breast;
    cout<<"Введите охват  талии: ";
    cin>>Obj.volume.hips;
    cout<<"Введите охват бедер: ";
    cin>>Obj.volume.waist;
}

void showData(WonderfulWoman &Obj)
{
    cout << "Модель: " << Obj.name << endl;
    cout << "Возраст: " << Obj.age << endl;
    cout << "Рост: " << Obj.height << endl;
    cout << "Вес: " << Obj.weight << endl;
    cout << "Объемы: " << Obj.volume.breast << '/' << Obj.volume.waist << '/' << Obj.volume.hips << endl;
    cout << "Английский (1 - да, 0 - нет): " << Obj.engKnowledge << endl;
    cout << endl;
}