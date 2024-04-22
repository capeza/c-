#include <iostream>
#include <iterator>
#include <ostream>
#include <vector>
using namespace std;

int main()
{
    setlocale (LC_ALL, "Ru");
    
    vector<int> myVector = {1,5,7,34,3,2,43,5,6};
    vector<int>::iterator i=myVector.begin();

    
    myVector.erase(i, i+3);
    


    
    
    for (vector<int>::iterator i=myVector.begin(); i!=myVector.end(); ++i) {
    cout<<*i<<endl;
    }
    
    // cout<<"------------------------------------"<<endl;
    
    // for (vector<int>::reverse_iterator i=myVector.rbegin(); i!=myVector.rend(); ++i) {
    // cout<<*i<<endl;
    // }

    // advance(i,4);
    // cout<<*i;

    // myVector.insert(i,999);
        return 0;
}
