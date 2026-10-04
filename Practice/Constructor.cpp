#include <iostream>
using namespace std;

class car{
private:
    float mileage;
public:
    void setdata(){
        cout<<"Enter 2 value :"<<endl;
        cin>>mileage;
    }
};
int main(){
    car c1,c2;
    c1.setdata();
    c2.setdata();

return 0;
}
