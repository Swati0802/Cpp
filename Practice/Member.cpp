#include <iostream>
using namespace std;

class Test{
private:
    int mark;
    float spi;
public:
    void setData(int , float);
    void DisplayData();
};
void Test :: setData(int i, float f){
    mark = i;
    spi = f;
}
void Test :: DisplayData()
{
    cout<<"Mark :"<<mark;
    cout<<"\nspi : "<<spi;
}
int main(){
    Test t;
    t.setData(1,7.5);
    t.DisplayData();

    return 0;
}
