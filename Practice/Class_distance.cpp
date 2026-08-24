#include <iostream>
using namespace std;

class Distance{
private:
    float meter,km;

public:
    void getData(){
        cout<<"Enter meter :"<<endl;
        cin>>meter;
        cout<<"Enter km :"<<endl;
        cin>>km;
    }
    void DisplayData(){
        cout<<"meter :"<<meter<<endl;
        cout<<"km :"<<km<<endl;
    }
    void add(Distance x, Distance y){
        meter = x.meter + y.meter;
        km = x.km + y.km;

    if(meter>=1000){
        km = km +(int)(meter/1000);
        meter = (int)meter%1000;
        }
    }
};
int main(){
    Distance d1,d2,d3;

    d1.getData();

    d2.getData();

    d3.add(d1,d2);
    cout<<"After addition :"<<endl;
    d3.DisplayData();

    return 0;
}
