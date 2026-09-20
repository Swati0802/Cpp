#include <iostream>
using namespace std;

class complex{
    int real,imag;

public:
    complex(int r=0; int i=0){
        real = r;
        imag = i;
    }
    complex operator ++(){
        real++;

        complex temp(real,imag);
        return temp;
    }
    complex operator ++(int){
        imag++;
        complex temp(real, imag);
        return temp;
    }
    void display(){
        cout<<real<<" + "<<imag<<" i "<<endl;
    }
};
int main(){
    complex c(2,3);

    cout<<"Original complex number :"<<endl;
    c.display();

    ++c;
    cout<<"After Prefi ++ :"<<endl;
    c.display();

    c++;
    cout<<"After Postfix ++ :"<<endl;
    c.display();

return 0;
}
