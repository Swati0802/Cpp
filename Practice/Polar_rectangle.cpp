#include <iostream>
#include <cmath>
using namespace std;

const float pi = 3.14159;

class rectangle{
public:
    double x,y;

    rectangle(){
        x = 0;
        y = 0;
    }
    void input(){
        cout<<"Enter x and y :"<<endl;
        cin>>x>>y;
    }
    void display(){
        cout<<"Rectangle : ("<<x<<","<<y<<")"<<endl;
    }
};
class polar{
    double radius, theta;
public:

    polar(){
        radius = 0;
        theta = 0;
    }
    polar(rectangle r){
        radius = sqrt(r.x * r.x + r.y * r.y);
        theta = atan2(r.y , r.x) * 180/pi;
    }
    void input(){
        cout<<"Enter radius and theta :"<<endl;
        cin>>radius>>theta;
    }
     void display(){
        cout<<"Polar : ("<<radius<<","<<theta<<")"<<endl;
    }
    operator rectangle(){
        double angle;
        angle =  theta*pi/180;

        rectangle r;
        r.x = radius * cos(angle);
        r.y = radius * sin(angle);

        return r;
    }
};
int main(){
    int choice;
    cout<<"1. Rectangle to Polar "<<endl;
    cout<<"2. Polar to Rectangle "<<endl;

    cout<<"Enter choice :"<<endl;
    cin>>choice;

    switch(choice){
    case 1:{
        rectangle r1;
        polar p1;

        r1.input();
        p1 = r1;

        r1.display();
        p1.display();

        break;
    }

    case 2:{
        polar p1;
        rectangle r1;

        p1.input();
        r1 = p1;

        p1.display();
        r1.display();

        break;
    }

    default:
        cout<<"Invalid Choice! "<<endl;
    }

return 0;
}
