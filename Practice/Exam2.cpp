#include <iostream>
using namespace std;

float calc(int i){
    return i*i;
}
float calc(int l, int b, int h){
    return l*b*h;
}
float calc(float a, float b){
    return a + b;
}
int main(){
    int i;
    cout<<"Area of square ="<<calc(5)<<endl;;

    cout<<"Area of Rectangle ="<<calc(2,5,10)<<endl;

    cout<<"Addition of Float ="<<calc(5.5f, 2.5f);
    return 0;
}
