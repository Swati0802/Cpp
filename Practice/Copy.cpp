#include <iostream>
using namespace std;

class Rectangle{
    int width,length;
public:
    Rectangle(int w, int l){
        width = w;
        length = l;
        cout<<width<<" width "<<endl;
        cout<<length<<" length "<<endl;
    }
    Rectangle(Rectangle &r){
        width = r.width;
        length = r.length;
    }
};
int main(){
    Rectangle r1(5,2);
    Rectangle r2(r1);

return 0;
}
