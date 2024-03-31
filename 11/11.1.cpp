#include <iostream>
using namespace std;

int main()
{
    double **p=0;
    
    
    p=new double*;
    *p=new double;
    **p=2;
    cout<<**p<<endl;
delete *p;
delete  p;

    // *(*(p=new double*)=new double)=2;


    
    
    
    
    
   

    return 0;
}
