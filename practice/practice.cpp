#include <iostream>
#include <vector>
using namespace std;

int main()
{
    setlocale (LC_ALL, "Ru");
    
    vector<int> myVector = {1,5,7,34,3,2,43,5,6};

    vector<int>::iterator it;

    it = myVector.begin();
    
    cout<<*it<<endl;
        return 0;
}
