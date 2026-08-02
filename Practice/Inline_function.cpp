#include <iostream>
using namespace std;

inline int largest(int a, int b, int c)
{
    if(a >= b && b >= c)
        return a;

    if(b >= a && b >= c)
        return b;

    else
        return c;
}
int main(){
    int x,y,z;

    cout<<"Enter x:"<<endl;
    cin>>x;

    cout<<"Enter y:"<<endl;
    cin>>y;


    cout<<"Enter z:"<<endl;
    cin>>z;

    cout<<"Largest"<<largest(x,y,z);

    return 0;
}
