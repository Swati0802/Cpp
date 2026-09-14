#include <iostream>
using namespace std;

class employee{
    string name;
    float salary;
public:
    void initialize(){
        cout<<"Enter employee name :"<<endl;
        cin>>name;

        cout<<"Enter salary :"<<endl;
        cin>>salary;
    }
    void display(){
        cout<<"Employee name :"<<name<<endl;
        cout<<"Salary :"<<salary<<endl;
    }
    friend void salary(employee, employee);
};
void salary(employee e1, employee e2){
    if(e1.salary > e2.salary){
        cout<<"Higher salary :"<<e1.salary<<endl;
    }
    else if(e2.salary > e1.salary){
        cout<<"Hogher salary :"<<e2.salary<<endl;
    }
    else{
        cout<<"Both employees have equal salaries "<<endl;
    }
}
int main(){
    employee e1,e2;

    cout<<"Enter details of empployee 1 :"<<endl;
    e1.initialize();

    cout<<"Enter details of employee 2 :"<<endl;
    e2.initialize();

    cout<<"Employee Details "<<endl;
    e1.display();
    e2.display();

    salary(e1, e2);

return 0;
}
