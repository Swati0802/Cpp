#include <iostream>
using namespace std;

int main(){
    int i, a[6],sum=0;
    cout<<"Enter marks of 6 subjects :"<<endl;

    for(i = 0; i < 6; i++){
        cin>>a[i];
        sum = sum + a[i];
    }
    cout<<"sum of 6 subjects :"<<sum<<endl;
    return 0;
}
