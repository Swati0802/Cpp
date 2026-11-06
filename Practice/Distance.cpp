#include <iostream>
using namespace std;

class DISTANCE{
    int feet, inch;

public:
    void getdata(){
        cout<<"Enter inch :"<<endl;
        cin>>inch;
        cout<<"Enter Feet :"<<endl;
        cin>>feet;
    }

    void add(DISTANCE d1, DISTANCE d2){
        feet = d1.feet + d2.feet;
        inch = d1.inch + d2.inch;
    }

    void check(){
        if(inch >= 12){
            feet = feet + inch/12;
            inch = inch % 12;
        }
    }
    void display(){
        cout<<"Total Feet :"<<feet<<endl;
        cout<<"Total Inch :"<<inch<<endl;
    }
};
int main(){
    DISTANCE d1,d2,d3;
    d1.getdata();
    d2.getdata();

    d3.add(d1,d2);
    d3.check();
    cout<<"After adding :"<<endl;
    d3.display();

return 0;
}
