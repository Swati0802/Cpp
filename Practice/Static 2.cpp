#include <iostream>
using namespace std;

class demo{
    static int count;
    int num;

public:
    void getdata(int a){
        num = a;
        count++;
    }
    void display(){
        cout<<"Count ="<<count;
    }
};
int demo::count;

int main(){
    demo d1,d2;
    d1.getdata(1);
    d1.display();
    d2.getdata(100);
    d2.display();

    return 0;
}
