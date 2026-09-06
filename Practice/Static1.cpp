#include <iostream>
using namespace std;

class demo{
    static int count;

public:
    void getdata(){
        cout<<"count = "<<count++<<endl;
        //++count output: 1,2,3
    }
};

int demo::count;

int main(){
    demo d1,d2,d3;
    d1.getdata();
    d2.getdata();
    d3.getdata();
return 0;
}
