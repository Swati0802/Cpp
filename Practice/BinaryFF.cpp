#include <iostream>
using namespace std;

class complex{
    int real, imag;

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

    friend complex operator +(complex c1, complex c2);
};
complex operator + (complex c1, complex c2){
    complex tmp;
    tmp.real = c1.real + c2.real;
    tmp.imag = c1.imag + c2.imag;
    return tmp;
}
int main(){
    complex c1(5,7), c2(4,2);
    complex c3;
    c3 = c1 + c2;
    c3.display();

return 0;
}
