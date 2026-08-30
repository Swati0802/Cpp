#include <iostream>
using namespace std;

class Time{
private:
    int hour, miniute, second;

public:
    void setTime(int h, int m, int s); //argument

    void DisplayTime();
};
void Time :: setTime(int h, int m, int s){
    hour = h;
    miniute = m;
    second = s;
}
void Time :: DisplayTime(){
    cout<<"Hour :"<<hour<<endl;
    cout<<"Miniute :"<<miniute<<endl;
    cout<<"Second :"<<second<<endl;
}
int main(){
    int h, m, s;
    Time t;

    cout<<"Enter h, m, s :"<<endl;
    cin>>h>>m>>s;

    t.setTime(h,m,s);
    t.DisplayTime();

    return 0;
}
