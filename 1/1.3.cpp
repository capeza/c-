#include <iostream>
using namespace std;
int main()
{
    int cups, spoons, knifes; 
    cout << "Enter numver of cups: ";
    cin >> cups;
    spoons = cups;
    knifes = cups;
    cout << "Numver of cups: " << cups<<endl;
    cout << "Numver of spoons: " << spoons<<endl;
    cout << "Numver of knifes: " << knifes<<endl;
    cout << "In total: "<<cups*3;
    return 0;
}
