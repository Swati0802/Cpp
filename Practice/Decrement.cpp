#include <iostream>
using namespace std;

class space{
    int x,y;

public:
    space(){
        x = y = 0;
    }
    space(int a, int b){
        x = a;
        y = b;
    }
    void getdata(){
        cout<<"x :";
        cin>>x;
        cout<<"y :";
        cin>>y;
        cout<<endl;
    }

    void display(){
        cout<<"x :"<<x<<endl;
        cout<<"y :"<<y<<endl;
    }
    void operator --();
};
void space :: operator--(){
    --x;
    --y;
}
int  main(){
    space s1,s2;

    s1.getdata();
    --s1;
    s1.display();

    s2.getdata();
    --s2;
    s2.display();

return 0;
}
