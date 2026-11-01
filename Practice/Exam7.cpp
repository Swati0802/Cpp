#include <iostream>
#include <cstring>
using namespace std;

class account{
    int balance;
    char acctType[10];

public:
    void getdata(int bal, char acct[]){
        balance = bal;
        strcpy(acctType , acct);
    }
};
int main(){
    account a1,a2;
    a1.getdata(10000,"Current");
    a2.getdata(1500,"Saing");

    return 0;
}
