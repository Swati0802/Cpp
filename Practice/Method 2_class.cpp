#include <iostream>
using namespace std;

class student{
    int s_id;

public:
    void getdata(){
        cout<<"Enter ID and sem :"<<endl;
        cin>>s_id>>s_sem;
    }
    void DisplayData(){
        cout<<"Student ID and sem :"<<s_id<<"\n"<<s_sem<<endl;
    }
private:
    int s_sem;
};
int main(){
    student s;
    s.getdata();
    s.DisplayData();

    return 0;
}
