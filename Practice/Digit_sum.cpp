#include <iostream>
using namespace std;

int main(){
    int num,b,sum=0;
    cout<<"Enter a number:"<<endl;
    cin>>num;

    while(num > 0){
        b = num % 10;
        sum = sum + b;
        num = num / 10;
    }
    cout<<"sum of digits ="<<sum;
    return 0;
}
