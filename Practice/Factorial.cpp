#include <iostream>
using namespace std;

class factorial{
    int n,fact;
public:
    factorial(int x){
        n = x;
        fact = 1;

        for(int i=1; i<=n; i++){
            fact = fact*i;
        }
    }
        factorial(factorial &f){
            n = f.n;
            fact = f.fact;
        }
        void display(){
            cout<<"Factorial of "<<n<<" = "<<fact<<endl;
        }

};
int main(){
    int n;
    cout<<"Enter a number :"<<endl;
    cin>>n;

    factorial f1(n);
    factorial f2(f1);
    f2.display();

return 0;
}
