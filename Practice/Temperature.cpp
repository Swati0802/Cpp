#include <iostream>
using namespace std;

int main(){
    int f,c;
    cout<<"Enter temperature in Fahrenheit(F) :"<<endl;
    cin>>f;

    c = (f-32)/1.8;
    cout<<"Temperature in Celsius(C) is:"<<c<<endl;
    return 0;
}
