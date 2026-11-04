#include <iostream>
using namespace std;

class IncomeTaxDept;

class employee{
    int id;
    string name;
    float salary;

public:
    void getdata(){
        cout<<"Enter Employee ID:"<<endl;
        cin>>id;
        cout<<"Enter Employee Name:"<<endl;
        cin>>name;
        cout<<"Enter Employee Salary :"<<endl;
        cin>>salary;
    }

    void display(){
        cout<<"ID :"<<id<<endl;
        cout<<"Name :"<<name<<endl;
        cout<<"Salary :"<<salary<<endl;
    }

friend void check(employee e[], int n, IncomeTaxDept I);

};

class IncomeTaxDept{
    int TaxRate;

public:
    void getdata(){
        cout<<"Enter Tax Rate :"<<endl;
        cin>>TaxRate;
    }
    void display(){
            cout<<"Tax Rate :"<<TaxRate<<endl;
        }

friend void check(employee e[], int n, IncomeTaxDept I);
};

void check(employee e[], int n, IncomeTaxDept I){
    int tax;
    for(int i=0; i<n; i++){

        if(e[i].salary > 5000){
            tax = (e[i].salary * I.TaxRate)/100;
            cout<<"Income Tax :"<<tax<<endl;
            e[i].display();
        }
    }
}

int main(){
    employee e[10];
    IncomeTaxDept I;
    int n;

    cout<<"Enter no. of Employee :"<<endl;
    cin>>n;

    for(int i=0; i<n; i++){
        e[i].getdata();
    }

    I.getdata();
    cout<<"Employee Income Tax Whose salary > 5000 "<<endl;
    check(e,n,I);

return 0;
}
