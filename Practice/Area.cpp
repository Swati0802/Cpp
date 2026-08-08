#include <iostream>
using namespace std;

float area(float radius){
    float pi = 3.14;
    return pi*radius*radius;
}
int main(){
    float radius;
    cout<<"Enter radius:"<<endl;
    cin>>radius;

    cout<<"Area of circle is:"<<area(radius);

    return 0;
}
