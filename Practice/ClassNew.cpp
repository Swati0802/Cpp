#include <iostream>
using namespace std;

class student{
private:
    string name;
    int s_id;
    float s_CPI, s_SPI;
    int c_sem;

public:
    void getData(){
        cout<<"Enter the student name:"<<endl;
        cin>>name;
        cout<<"Enter the student ID :"<<endl;
        cin>>s_id;
        cout<<"Enter the student CPI :"<<endl;
        cin>>s_CPI;
        cout<<"Enter the student SPI :"<<endl;
        cin>>s_SPI;
        cout<<"Enter the student current sem :"<<endl;
        cin>>c_sem;
    }
    void display(){
        cout<<"Student name :"<<name<<endl;
        cout<<"ID :"<<s_id<<endl;
        cout<<"CPI :"<<s_CPI<<endl;
        cout<<"SPI :"<<s_SPI<<endl;
        cout<<"Current sem :"<<c_sem<<endl;
    }
    float getCPI(){
        return s_CPI;
    }
    float getSPI(){
        return s_SPI;
    }
    int getID(){
        return s_id;
    }

};
int main(){
    student s[20],temp;
    int n,choice,id,found=0;

    cout<<"Enter the no. of student :"<<endl;
    cin>>n;

    for(int i=0; i<n; i++){
        cout<<"Enter Details of student :"<<i+1<<endl;
        s[i].getData();
    }
    cout<<"1. Student having CPI between 7.6 and 8.9 :"<<endl;
    cout<<"2. Student in Ascending Order of SPI :"<<endl;
    cout<<"3. Enter Student ID to Search :"<<endl;
    cout<<"Enter one choice from above three option :"<<endl;
    cin>>choice;

    switch(choice){
case 1:
    cout<<"Student having CPI between 7.6 and 8.9 :"<<endl;
    for(int i=0; i<n; i++){
            if(s[i].getCPI() >= 7.6 && s[i].getCPI() <= 8.9)
            {
                s[i].display();
            }
    }
    break;

case 2:
    for(int i=0; i<n-1; i++){
        for(int j=i+1; j<n; j++)
            {
            if(s[i].getSPI() > s[j].getSPI())
            {
                temp = s[i];
                s[i] = s[j];
                s[j] = temp;
            }
        }
    }
    cout<<"Students in Ascending Order of SPI :"<<endl;
    for(int i=0; i<n; i++){
        s[i].display();
    }
    break;

case 3:
    cout<<"Enter Student ID :"<<endl;
    cin>>id;

    found = 0;
    for(int i=0; i<n; i++){
        if(s[i].getID() == id){
            s[i].display();
            found = 1;
        }
    }
    if(found = 0){
        cout<<"Student ID Not Found "<<endl;
    }
    break;

default:
    cout<<"Invalid Choice."<<endl;
    }
    return 0;
}
