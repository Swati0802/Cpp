#include <iostream>
using namespace std;

float area(int r){
    return 3.14*r*r;
}
float area(int h, int b){
    return 0.5*h*b;
}
float area(float l){
    return l*l;
}

int main(){
    cout<<"area of circle :"<<area(4)<<endl;
    cout<<"area of triangle :"<<area(4,5)<<endl;
    cout<<"area of box :"<<area(5.5f)<<endl;

    return 0;
}
