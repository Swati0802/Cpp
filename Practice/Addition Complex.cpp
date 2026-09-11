#include <iostream>
using namespace std;

class complex{
    int real,imag;
public:
    complex(int r, int i){
        real = r;
        imag = i;
    }
    friend complex add(complex, complex);

    void display(){
        cout<<real<<"+"<<imag<<"i"<<endl;
    }
};
complex add(complex c1, complex c2){
    complex result(c1.real + c2.real, c1.imag + c2.imag);

    return result;
}
int main(){
    complex c1(5,3);
    complex c2(2,4);

    complex result = add(c1,c2);

    cout<<"First complex number :"<<endl;
    c1.display();

    cout<<"Second complex number :"<<endl;
    c2.display();

    cout<<"Addition ="<<endl;
    result.display();

    return 0;
}
