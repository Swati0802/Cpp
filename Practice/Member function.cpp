#include <iostream>
using namespace std;

class num{
    int n;

public:
    void getdata(int x){
        n = x;
    }
    void display(){
        cout<<"Value of n is :"<<n<<endl;
    }
    void operator -(){
        n = -n;
    }
};
int main(){
    num n;
    n.getdata(-10);
    n.display();

    -n;
    n.display();
    cout<<endl;
return 0;
}
