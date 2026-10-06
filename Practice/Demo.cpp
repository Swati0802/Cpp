#include <iostream>
using namespace std;

class demo{
    int m,n;

public:
    demo(int x, int y){
        m = x;
        n = y;
        cout<<"Parameter Constructor"<<endl;
        cout<<" m :"<<m<<endl;
        cout<<"n :"<<n<<endl<<endl;
    }
    demo(demo &x){
        m = x.m;
        n = x.n;
        cout<<"Copy Constructor"<<endl;
        cout<<" m :"<<m<<endl;
        cout<<"n :"<<n<<endl;
    }
};
int main(){
    demo d1(5,6);
    demo d2(d1); //demo d2 = d1;

return 0;
}
