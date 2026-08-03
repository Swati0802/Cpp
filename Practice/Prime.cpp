#include <iostream>
using namespace std;

int main(){
    int i,j,num;

    cout<<"Enter n :"<<endl;
    cin>>num;

    for(i=2; i<=num; i++){
        for(j=2; j<i; j++){
            if(i % j== 0)
                break;
        }
        if(j==i)
            cout<<i<<" ";
    }
    return 0;
}
