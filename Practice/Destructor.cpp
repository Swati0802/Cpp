#include <iostream>
using namespace std;

class car{
    int n;

public:
    car(){
        cout<<"Enter Value of n :"<<endl;
        cin>>n;
    }
    ~car(){
        cout<<"Destructor Run after object destroyed (in main function execution of object complete and return 0 is also done and then destructor is execute)";
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
