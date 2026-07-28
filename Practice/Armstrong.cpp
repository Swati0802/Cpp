#include <iostream>
using namespace std;

int main(){
    int num,temp,rem,sum=0;

    cout<<"Enter a number:"<<endl;
    cin>>num;

    temp = num;

    while(temp > 0){
        rem = temp % 10;
        sum = sum + rem * rem * rem;
        temp = temp / 10;
    }
    if(sum == num){
        cout<<"Armstrong number"<<endl;
    }
    else{
        cout<<" Not Armstrong number";
    }
    return 0;
}
