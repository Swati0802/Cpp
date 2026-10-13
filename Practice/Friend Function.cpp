#include <iostream>
using namespace std;

class unary{
    int a,b,c;

public:
    void getdata(){
        cout<<"a :"<<"\n"<<"b :"<<"\n"<<"c :"<<endl;
        cin>>a>>b>>c;
    }
    void display(){
        cout<<"a :"<<a<<endl;
        cout<<"b :"<<b<<endl;
        cout<<"c :"<<c<<endl;
    }
    friend void operator -(unary &x);
};
void operator -(unary &x){
    x.a = -x.a;
    x.b = -x.b;
    x.c = -x.c;
}

int main(){
    unary u;
    u.getdata();

    cout<<"Before Overloading "<<endl;
    u.display();
    -u;

    cout<<"After Overloading "<<endl;
    u.display();

return 0;
}
