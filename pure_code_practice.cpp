#include <iostream>
#include <cstring>
using namespace std;

int main()
{
    setlocale(LC_ALL,"Ru");

    char ourStr[128]="";//для сохранения строки

    cout<<"Введите текст латиницей (не больше 128 символов):\n";
    cin.getline(ourStr,128);

    
    cout<<"Строка \""<<ourStr<<"\" состоит из "
    <<strlen(ourStr)<<" символов!\n\n";
    
}