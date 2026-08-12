#include <iostream>
using namespace std;

class Bank{
private:
    string name;
    int acctNo;
    float balance;
public:
    void assign(){
        cout<<"Enter Depositor Name :"<<endl;
        cin>>name;
        cout<<"Enter Account Number :"<<endl;
        cin>>acctNo;
        cout<<"Enter Initial Balance :"<<endl;
        cin>>balance;
    }
    void deposit(){
        float amount;
        cout<<"Enter Deposit Amount :"<<endl;
        cin>>amount;
        balance = balance + amount;
    }
    void withdraw(){
        float amount;
        cout<<"Enter Withdrawal Amount :"<<endl;
        cin>>amount;
        if(amount <= balance){
            balance = balance - amount;
            cout<<"Withdrawal Successful."<<endl;
        }
        else{
            cout<<"Insufficient Balance."<<endl;
        }
    }
    void display(){
        cout<<"Depositor Name :"<<name<<endl;
        cout<<"Account Number :"<<acctNo<<endl;
        cout<<"Balance :"<<balance<<endl;
    }
};
int main(){
    Bank b[50];
    int n;
    cout<<"Enter Number of Account Holders :"<<endl;
    cin>>n;
    for(int i=0; i<n; i++){
        cout<<"Enter Details of Account Holder :"<<i+1<<endl;
        b[i].assign();
    }
    for(int i=0; i<n; i++){
        cout<<"Transaction for Account Holder :"<<i+1<<endl;
        b[i].deposit();
        b[i].withdraw();
    }
    cout<<"Final Account Details :"<<endl;
    for(int i=0; i<n; i++){
        b[i].display();
    }
    return 0;
}
