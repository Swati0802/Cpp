#include <iostream>
using namespace std;

class number{
    int n1,n2,n3;
public:
    void getdata(){
        cout<<"Enter three numbers :"<<endl;
        cin>>n1>>n2>>n3;
    }
    friend void mean(number);
};
void mean(number n){
    float mean;
    mean = (n.n1 + n.n2 + n.n3)/3.0;
    cout<<"Mean ="<<mean;
}
int main(){
    number n;

    n.getdata();
    mean(n);

    return 0;
}
