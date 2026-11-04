#include <iostream>
using namespace std;

class visitor{
    static int count;

public:
    void getdata(){
        cout<<"Visitor ="<<++count<<endl;
    }
};
int visitor :: count=0;

int main(){
    visitor v1,v2;

    v1.getdata();
    v2.getdata();

    return 0;
}
