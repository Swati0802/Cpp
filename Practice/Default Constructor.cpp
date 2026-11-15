#include <iostream>
using namespace std;

class area{
    int l,b;
public:
    area(){
        l = 5;
        b = 2;
    }
    void calc(){
        cout<<"Area ="<<l * b<<endl;
    }
};
int main(){
    area a1,a2;
    a1.calc();
    a2.calc();

return 0;
}
