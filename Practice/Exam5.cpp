#include <iostream>
using namespace std;

class promotion;
class employee{
    int id;
    string name,dept;
    float salary;

public:
    void getdata(){
        cout<<"Enter Employee ID :"<<endl;
        cin>>id;
        cout<<"Enter Employee name :"<<endl;
        cin>>name;
        cout<<"Enter Employee Department :"<<endl;
        cin>>dept;
        cout<<"Enter Employee Salary :"<<endl;
        cin>>salary;
    }
    void display(){
        cout<<"Employee ID :"<<id<<endl;
        cout<<"Employee name :"<<name<<endl;
        cout<<"Employee Department :"<<dept<<endl;
        cout<<"Employee salary :"<<salary<<endl;
    }

    friend void check(employee e[], int n, promotion p);
};

class promotion{
    string designation;

public:
    void getdata(){
        cout<<"Enter Designation :"<<endl;
        cin>>designation;
    }

    void display(){
        cout<<"Designation :"<<designation<<endl;
    }

    friend void check(employee e[], int n, promotion p);
};

void check(employee e[], int n, promotion p){
    for(int i=0; i<n; i++){
        if(e[i].salary >= 100000){
            e[i].display();
            p.display();
        }
    }
}


int main(){
    employee e[10];
    promotion p;
    int n;

    cout<<"Enter number of Employee :"<<endl;
    cin >>n;

    cout<<"Enter Employee Details :"<<endl;
    for(int i=0; i<n; i++){
        cout<<"Employee :"<<i+1<<endl;
        e[i].getdata();
    }

    p.getdata();

    cout<<"Employee having salary > 10000"<<endl;
    check(e, n, p);

    return 0;
}
