#include <iostream>
using namespace std;

class student{

private:
    int s_id;
    int s_sem;

public:
    void getdata(){
        cout<<"Enter student ID and sem :"<<endl;
        cin>>s_id>>s_sem;
    }
    void DisplayData(){
        cout<<"Student ID and sem :"<<s_id<<"\n"<<s_sem<<endl;
    }
};
int main(){
    student s,s1;
    s.getdata();
    s.DisplayData();

    s1.getdata();
    s.DisplayData();

    return 0;
}
