#include <iostream>
using namespace std;

class faculty{
    string name,dept,designation;
    int id;

public:
    void getdata(string d,string des){
        cout<<"Enter Faculty Name :"<<endl;
        cin>>name;
        cout<<"Enter Faculty ID :"<<endl;
        cin>>id;
        cout<<"For Default Value of depatment and designation Enter - :"<<endl;
        cout<<"Enter Faculty Department :"<<endl;
        cin>>dept;
        cout<<"Enter Faculty Designation :"<<endl;
        cin>>designation;

        if(dept=="-")
            dept = d;

        if(designation == "-")
            designation = des;
    }

    void display(){
        cout<<"ID : "<<id<<endl;
        cout<<"Name : "<<name<<endl;
        cout<<"Department : "<<dept<<endl;
        cout<<"Designation : "<<designation<<endl;
    }
    void check(){
        if(dept == "IT"){
            display();
        }
    }
};

int main(){
    faculty f[10];
    int n;

    cout<<"Enter no. of Faculty member :"<<endl;
    cin>>n;

    cout<<"Enter Faculty Details :"<<endl;
    for(int i=0; i<n; i++){
        cout<<"Faculty :"<<i+1<<endl;
        f[i].getdata("Admin","HR");
    }

    cout<<"\nAll Faculty Details :"<<endl;
    for(int i=0; i<n; i++){
        f[i].display();
    }

    cout<<"\nIT Department Faculty :"<<endl;
    for(int i=0; i<n; i++){
        f[i].check();
    }

return 0;
}
