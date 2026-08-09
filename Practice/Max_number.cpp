#include <iostream>
using namespace std;

int maximum(int a,int b,int c){
    if(a>b && a>c)
        return 0;
    if(b>a && b>c)
        return b;
    else
        return c;
}
int main(){
    int a,b,c;
    cout<<"Enter a :"<<endl;
    cin>>a;

    cout<<"Enter b:"<<endl;
    cin>>b;

    cout<<"Enter c:"<<endl;
    cin>>c;

    cout<<"Maximum Number is:"<<maximum(a,b,c)<<endl;
    return 0;
}
