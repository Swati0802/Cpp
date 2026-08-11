#include <iostream>
using namespace std;

float area(float base, float height){
    return 0.5*base*height;
}
float area(float side){
    return (1.732/4)*side*side;
}
float area(float base, float height,int){
    return 0.5*base*height;
}
int main(){
    float base,height,side;
    cout<<"Enter base and height of Right Triangle :"<<endl;
    cin>>base>>height;
    cout<<"Area ="<<area(base,height)<<endl;

    cout<<"Enter side of Equilateral Triangle :"<<endl;
    cin>>side;
    cout<<"Area ="<<area(side)<<endl;

    cout<<"Enter base and height of Isosceles Triangle :"<<endl;
    cin>>base>>height;
    cout<<"Area ="<<area(base,height,1)<<endl;

    return 0;
}2
