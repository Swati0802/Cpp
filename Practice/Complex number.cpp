#include <iostream>
using namespace std;

class complex{
    int real,imag;

public:
    void getdata(){
        cout<<"Enter real number :"<<endl;
        cin>>real;
        cout<<"Enter complex number :"<<endl;
        cin>>imag;
    }
    void addComplex(complex x, complex y){
        real = x.real + y.real;
        imag = x.imag + y.imag;
    }
    void display(){
        cout<<"sum =" <<real<< "+" <<imag<< "i";
    }
};
int main(){
    complex c1,c2,c3;
    c1.getdata();

    c2.getdata();

    c3.addComplex(c1,c2);
    c3.display();

    return 0;
}
