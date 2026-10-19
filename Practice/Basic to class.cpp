#include <iostream>
using namespace std;

class sample{
    int a;
public:
    sample(){
        a = 0;
    }
    sample(int x){
        a = x;
    }
    void display(){
        cout<<"The value of a :"<<a<<endl;
    }
};
int main(){
    int m = 10;
    sample s;
    s = m;
    s.display();

return 0;
}
