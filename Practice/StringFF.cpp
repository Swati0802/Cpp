#include <iostream>
using namespace std;

class String{
    string text;
public:
    void getdata(){
        cin>>text;
    }
    friend String operator + (String s1, String s2);
    void display(){
        cout<<text;
    }
};
String operator + (String s1, String s2){
    String tmp;
    tmp.text = s1.text + s2.text;
    return tmp;
}
int main(){
    String s1,s2,s3;
    cout<<"Enter a string 1:"<<endl;
    s1.getdata();
    cout<<"Enter a string 2:"<<endl;
    s2.getdata();

    s3 = s1 + s2;
    cout<<"Combined String :"<<endl;
    s3.display();

return 0;
}
