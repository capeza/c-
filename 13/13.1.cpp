#include <iostream>
#include <string>
using namespace std;

class Tiles
{
private:
public:
    double size_h, size_w, price;
    string brand;
    void getData()
    {
    cout << "Имя производителя: "<<brand<<endl;
    cout << "Высота: "<<size_h<<endl;
    cout << "Вес: "<<size_w<<endl;
    cout << "Цена: "<<price<<endl<<endl;
    }

};

int main()
{
    setlocale(LC_ALL, "Ru");

    Tiles first;
    Tiles second;

    first.brand="Adidas";
    first.size_h=42;
    first.size_w=1.5;
    first.price=1200;

    second.brand="Nike";
    second.size_h=40;
    second.size_w=1;
    second.price=1000;

    first.getData();
    second.getData();
    return 0;
}
