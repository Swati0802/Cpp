#include <iostream>
using namespace std;

class Rectangle{
private:
    int width,height;

public:
    void getData(int w, int h);

    int area();
};
void Rectangle :: getData(int w,int h){
    width = w;
    height = h;
}
int Rectangle :: area(){
    return width*height;
}
int main()
{
    Rectangle rect;
    int w,h;
    rect.getData(3,4);

    cout<<"Area :"<<rect.area();
    return 0;
}
