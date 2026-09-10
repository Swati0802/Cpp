#include <iostream>
using namespace std;

class b;
class a{
    int n1;
public:
    void getdata(){
        cout<<"Enter value of a :"<<endl;
        cin>>n1;
    }
    friend void swapvalue(a &, b &);
};
class b{
    int n2;
public:
    void getdata(){
        cout<<"Enter value of b :"<<endl;
        cin>>n2;
    }
    friend void swapvalue(a &, b &);
};
void swapvalue(a &a, b &b){
    int tmp;
    tmp = a.n1;
    a.n1 = b.n2;
    b.n2 = tmp;

    cout<<"After swapping :"<<endl;
    cout<<"A ="<<a.n1<<endl;
    cout<<"B ="<<b.n2<<endl;
}
int main(){
    a A;
    b B;

    A.getdata();
    B.getdata();

    swapvalue(A,B);

return 0;
}
