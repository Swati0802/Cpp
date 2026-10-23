#include <iostream>
using namespace std;

class sample{
    int a;
public:
    sample(){
        a = 10;
    }
    operator int(){  // casting operator function
        int x;
        x = a;
        return x;
    }
};
int main(){
    sample s;
    int y = s; // class to basic conversion
               // Destination type is int

    cout<<"The value of y ="<<y<<endl;

    return 0;
}
