#include <iostream>
using namespace std;

int main(){
    int a,b,choice;
    cout<<"Enter a :"<<endl;
    cin>>a;

    cout<<"Enter b :"<<endl;
    cin>>b;

    cout<<"\n1.Addition\n 2.Subtraction\n 3.Multiplication\n 4.Division\n"<<endl;
    cout<<"Enter choice (a number) :"<<endl;
    cin>>choice;

    switch(choice){
case 1:
    cout<<"a + b ="<<a + b<<endl;
    break;

case 2:
    cout<<"a - b ="<<a - b<<endl;
    break;

case 3:
    cout<<"a * b ="<<a * b<<endl;
    break;

case 4:
    if(b != 0)
        cout<<"a / b ="<<a / b<<endl;
    else
        cout<<" Division by zero is not allowed!"<<endl;
    break;

default :
    cout<<"Invalid Choice";
    }
    return 0;
}
