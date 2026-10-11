#include <iostream>
using namespace std;

class complex{
    int real,imag;

public:
    complex(){
        real = 0;
        imag = 0;
    }
    complex(int x, int y){
        real = x;
        imag = y;
    }
    void display(){
        cout<<"Real value :"<<real<<endl;
        cout<<"Imaginary value :"<<imag<<endl;
    }

    complex operator +(complex);
};
complex complex :: operator +(complex c){
    complex tmp;
    tmp.real = real + c.real;
    tmp.imag = imag + c.imag;
    return tmp;
}
int main(){
    complex c1(4,6), c2(7,9);
    complex c3;
    c3 = c1+ c2;   //c3 = c1.operator + c2;
    c3.display();
return 0;
}
