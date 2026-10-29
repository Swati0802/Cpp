#include <iostream>
using namespace std;

class employee{
private:
    string name;
    int id;
    float salary;

public:
    void getdata(){
        cout<<"Enter Employee ID :"<<endl;
        cin>>id;

        cout<<"Enter Employee name :"<<endl;
        cin>>name;

        cout<<"Enter Employee Salary :"<<endl;
        cin>>salary;
    }
    void display(){
        cout<<"Employee ID :"<<id<<endl;
        cout<<"Employee name :"<<name<<endl;
        cout<<"Employee Salary :"<<salary<<endl;
    }
    float getSalary(){
        return salary;
    }
     int getID(){
        return id;
    }
};
int main(){
    employee e[5],temp;
    int n,id,found=0;

    cout<<"Enter number of Employee :"<<endl;
    cin>>n;

    for(int i=0; i<n; i++){
        cout<<"Employee Details :"<<i+1<<endl;
        e[i].getdata();
    }

    cout<<"\nsalary between 1 Lakh and 5 Lakh :"<<endl;
    for(int i=0; i<n; i++){
            if(e[i].getSalary()>=100000 && e[i].getSalary()<=500000){
             e[i].display();
             found = 1;
            }
    }


    for(int i=0; i<n-1; i++){
       for(int j=i+1; j<n; j++){
        if(e[i].getSalary() > e[j].getSalary()){
            temp = e[i];
            e[i] = e[j];
            e[j] = temp;
        }
       }
    }
    cout<<"\nAscending order of Salary :"<<endl;
    for(int i=0; i<n; i++){
        e[i].display();
    }


     cout<<"\nEnter ID which you find :"<<endl;
     cin>>id;
     for(int i=0; i<n; i++){
        if(e[i].getID() == id){
            e[i].display();
            found = 1;
        }
     }
     if(found == 0)
        cout<<"Not Found!"<<endl;

    return 0;
}
