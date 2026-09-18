#include <iostream>
using namespace std;

class student{
    static int count;
public:
    student(){
        count++;
    }
    static void show(){
        cout<<"No. of objects created ="<<count<<endl;
    }
};
int student :: count = 0;
int main(){
    student s1,s2;

    student :: show();

return 0;
}
