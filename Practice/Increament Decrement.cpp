#include <iostream>
using namespace std;

class number{
    int value;
public:
    void getdata(){
        cout<<"Enter Value :"<<endl;
        cin>>value;
    }
    void operator++(){
        value++;
    }
    void operator--(){
        value--;
    }
    void display(){
        cout<<"Value ="<<value<<endl;
    }
};
int main(){
    number n;
    n.getdata();
    cout<<"Before increment :"<<endl;
    n.display();
    ++n;
    cout<<"After increment :"<<endl;
    n.display();
    --n;
    cout<<"After decrement :"<<endl;
    n.display();

return 0;
}
