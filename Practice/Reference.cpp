#include <iostream>
using namespace std;

int main(){
    int a = 10;
    int &b = a;

    cout<<"a ="<<a<<endl;
    cout<<"b ="<<a<<endl;

    b = 20;

    cout<<"After changing b"<<endl;
    cout<<"a ="<<a<<endl;
    cout<<"b ="<<a<<endl;

    return 0;
}
