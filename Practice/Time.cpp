#include <iostream>
using namespace std;

class time{
    int h, m, s;
public:
    void getdata(){
        cout<<"Enter hours :"<<endl;
        cin>>h;
        cout<<"Enter minutes :"<<endl;
        cin>>m;
        cout<<"Enter seconds :"<<endl;
        cin>>s;
    }
    void add(time t1, time t2){
        s = t1.s + t2.s;
        m = t1.m + t2.m;
        h = t1.h + t2.h;

        if(s >= 60){
            s = s-60;
            m++;
        }
        if(m>=60){
            m = m-60;
            h++;
        }
    }
    void display(){
        cout<<"Total time ="<<h<<" Hours  "<<m<<" Minutes  "<<s<<" Seconds  "<<endl;
    }
};
int main(){
    time t1,t2,t3;

    cout<<"Enter Time :"<<endl;
    t1.getdata();

    cout<<"Enter Time :"<<endl;
    t2.getdata();

    t3.add(t1,t2);
    t3.display();

return 0;
}
