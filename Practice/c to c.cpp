#include <iostream>
using namespace std;

class alpha{
    int a;

public:
    alpha(){
    }
    alpha(int x){
        a = x;
    }
    int getdata(){
        return a;
    }
};

class beta{
    int b;
public:
    beta(){
    }
    beta(int x){
        b = x;
    }

    //Constructor
    beta(alpha temp){
        b = temp.getdata();
    }

    //operator function
    operator alpha(){
        return alpha(b);
    }

    int getdata() {
        return b;
    }
};

int main(){
    alpha a(10);
    beta b(a);
 // beta b(20);
    a = b;

    cout << "Value of a = " << a.getdata() << endl;
    cout << "Value of b = " << b.getdata() << endl;

return 0;
}
