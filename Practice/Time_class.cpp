#include <iostream>
using namespace std;

class Time{
private:
    int hour,miniute,second;

public:
    void getData(){
        cout<<"Enter hour :"<<endl;
        cin>>hour;
        cout<<"Enter miniute :"<<endl;
        cin>>miniute;
        cout<<"Enter second :"<<endl;
        cin>>second;
    }
    void DisplayData(){
        cout<<"hour :"<<hour<<endl;
        cout<<"miniute :"<<miniute<<endl;
        cout<<"second :"<<second<<endl;
    }
    void add(Time x, Time y){
        hour = x.hour + y.hour;
        miniute = x.miniute + y.miniute;
        second = x.second + y.second;
    }
};
int main(){
    Time t1,t2,t3;

    t1.getData();
    t1.DisplayData();

    t2.getData();
    t2.DisplayData();

    t3.add(t1,t2);
    cout<<"After Addition :"<<endl;
    t3.DisplayData();
return 0;
}
