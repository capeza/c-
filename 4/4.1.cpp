// Пользователь вводит число от 1 до 9999 (сумму выдачи вводит
// банкомате). Необходимо вывести на экран словами введенную сумму и в
// конце написать название валюты с правильным окончанием.

#include <iostream>
using namespace std;

int main()
{
    setlocale (LC_ALL, "Ru");
    //задаём переменную, вводим число
int number;
cout<<"Введите число: ";
cin>>number;


//Проверяем входит ли оно в заданный промежуток
if (number>9999||number<0)
{
    cout<<"Введено не верное значение!";
return 0;
}

//узнаем класс тысяч
if (number>=9000)
{
    cout<<"Девять тысяч ";
}else if (number>=8000)
{
    cout<<"Восемь тысяч ";
}else if (number>=7000)
{
    cout<<"Семь тысяч ";
}else if (number>=6000)
{
    cout<<"Шесть тысяч ";
}else if (number>=5000)
{
    cout<<"Пять тысяч ";
}else if (number>=4000)
{
    cout<<"Четыре тысячи ";
}else if (number>=3000)
{
    cout<<"Три тысячи ";
}else if (number>=2000)
{
    cout<<"Две тысячи ";
}else if (number>=1000)
{
    cout<<"Одна тысяча ";
}
//узнаем класс сотен
if (number%1000>=900)
{
cout<<"девятьсот ";
}else if (number%1000>=800)
{
   cout<<"восемьсот ";
}else if (number%1000>=700)
{
    cout<<"семьсот ";
}else if (number%1000>=600)
{
    cout<<"шестьсот ";
}else if (number%1000>=500)
{
    cout<<"пятьсот ";
}else if (number%1000>=400)
{
    cout<<"четыреста ";
}else if (number%1000>=300)
{
    cout<<"триста ";
}else if (number%1000>=200)
{
    cout<<"двести ";
}else if (number%1000>=100)
{
    cout<<"сто ";
}

//узнаем класс десяток, отдельно прописывает от 10 до 19 добавляя на конце валюту
if (number%100>=90)
{
    cout<<"девяносто ";
}else if (number%100>=80)
{
    cout<<"восемьдесят ";
}else if (number%100>=70)
{
    cout<<"семьдесят ";
}else if (number%100>=60)
{
    cout<<"шестьдесят ";
}else if (number%100>=50)
{
    cout<<"пятьдесят ";
}else if (number%100>=40)
{
    cout<<"сорок ";
}else if (number%100>=30)
{
    cout<<"тридцать ";
}else if (number%100>=20)
{
    cout<<"двадцать ";
}else if (number%100==19)
{
    cout<<"девятнадцать долларов";
}else if (number%100==18)
{
    cout<<"восемнадцать долларов";
}else if (number%100==17)
{
    cout<<"семнадцать долларов";
}else if (number%100==16)
{
    cout<<"шестадцать долларов";
}else if (number%100==15)
{
    cout<<"пятнадцать долларов";
}else if (number%100==14)
{
    cout<<"четырнадцать долларов";
}else if (number%100==13)
{
    cout<<"тринадцать долларов";
}else if (number%100==12)
{
    cout<<"двенадцать долларов";
}else if (number%100==11)
{
    cout<<"одинадцать долларов";
}else if (number%100==10)
{
    cout<<"десять долларов";
}

//узнаем класс единиц, отдельно от чисел с 10 до 19. Добавляем валюту
if (number%100>=20&& number%10==9)
{
    cout<<"девять долларов";
}else if (number%10==8)
{
    cout<<"восемь долларов";
}else if (number%10==7)
{
    cout<<"семь долларов";
}else if (number%10==6)
{
    cout<<"шесть долларов";
}else if (number%10==5)
{
    cout<<"пять долларов";
}else if (number%10==4)
{
    cout<<"четыре доллара";
}else if (number%10==3)
{
    cout<<"три доллара";
}else if (number%10==2)
{
    cout<<"два доллара";
}else if (number%10==1)
{
    cout<<"один доллар";
}else if (number%10==0)
{
    cout<<"долларов";
}
    return 0;
}
