#include <iostream>
#include <string>
using namespace std;

class String{
    string text;
public:
    void getdata(){
        cin>>text;
    }
    String operator+(String s){
        String temp;
        temp.text = text + s.text;
        return temp;
    }
    void display(){
        cout<<text;
    }
};
int main(){
    String s1,s2,s3;
    cout<<"Enter a string 1 :"<<endl;
    s1.getdata();
    cout<<"Enter a string 2:"<<endl;
    s2.getdata();
    s3 = s1 + s2;
    cout<<"Combined string :"<<endl;
    s3.display();

return 0;
}
