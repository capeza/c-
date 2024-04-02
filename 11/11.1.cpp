#include <iostream>
using namespace std;

int main()
{
    double **p=0;
    double x,*y;
    x=2;
    y=&x;
    p=&y;


    cout<<**p;
    
//     p=new double*;
//     *p=new double;
//     **p=2;
//     cout<<**p<<endl;
// delete *p;
// delete  p;

    // *(*(p=new double*)=new double)=2;
    return 0;
}
