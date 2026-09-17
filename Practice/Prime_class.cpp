#include <iostream>
using namespace std;

class prime{
    int number;
public:
    prime(int n){
        number = n;
        int count = 0;

        for(int i=1; i<=number; i++){
            if(number % i == 0){
                count++;
            }
        }
        if(count == 2){
            cout<<number<<" is a prime number "<<endl;
        }
        else{
            cout<<number<<" is Not prime number "<<endl;
        }
    }
};
int main(){
    int n;
    cout<<"Enter a number :"<<endl;
    cin>>n;

    prime p(n);

return 0;
}
