#include <iostream>
using namespace std;

class demo{
    int a,b;
public:
    demo(int x, int y){
        a = x;
        b = y;
        cout<<"Parameterized Called "<<endl;
    }
};
int main(){
    demo(5,2);
    demo(7,8);

return 0;
}
