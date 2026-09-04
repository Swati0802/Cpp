#include <iostream>
using namespace std;

class student{
private:
    string name;
    int id;

public:
    void getdata(){
        cout<<"Enter name :"<<endl;
        cin>>name;
        cout<<"Enter ID :"<<endl;
        cin>>id;
    }

    void display(){
        cout<<"Name :"<<name<<endl;
        cout<<"ID :"<<id<<endl;
    }
};
int main(){
    student s;
    int n;

    cout<<"Enter number of student :"<<endl;
    cin>>n;

    cout<<"student Details :"<<endl;
    s.getdata();
    s.display();

    return 0;
}
