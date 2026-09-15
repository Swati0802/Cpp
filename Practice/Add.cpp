#include <iostream>
using namespace std;

class number{
    int n;
public:
    void getdata(){
        cout<<"Enter a number :"<<endl;
        cin>>n;
    }
    void add(number n1, number n2){
        n = n1.n + n2.n;
    }
    void display(){
        cout<<"Addition ="<<n<<endl;
    }
};
int main(){
    number n1,n2,n3;
    n1.getdata();
    n2.getdata();

    n3.add(n1,n2);
    n3.display();

return 0;
}
