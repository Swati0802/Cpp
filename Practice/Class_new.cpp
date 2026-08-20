#include <iostream>
using namespace std;

class Employee{
    int E_id;
    float E_salary;
    string E_name;

public:
    void setData(){
        cout<<"Enter Employee details :\n ID , salary and name :"<<endl;
        cin>>E_id>>E_salary>>E_name;
    }
    void DisplayData(){
        if(E_salary > 1000){
            cout<<"ID \nsalary \nname : "<<endl;
            cout<<"\n"<<E_id<<"\n"<<E_salary<<"\n"<<E_name<<endl;
        }
    }
};

int main(){
    Employee e[3];
    cout<<"Enter Details of Employee:"<<endl;
    for(int i=0; i < 3; i++){
        e[i].setData();
    }
    for(int i=0; i < 3; i++){
        e[i].DisplayData();
    }

    return 0;
}
