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
