#include <iostream>
using namespace std;

class car{
    int n;

public:
    car(){
        cout<<"Enter Value of n :"<<endl;
        cin>>n;
    }
    void display(){
        cout<<"n :"<<n<<endl;
    }
};
int main(){
    car c;
    c.display();
return 0;
}
