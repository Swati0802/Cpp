#include <iostream>
using namespace std;

class mystring{
    char str[100];

public:
    void getdata(){
        cout<<"Enter string :"<<endl;
        cin>>str; //gets(string);
    }
    void display(){
        cout<<"string :"<<str<<endl;
    }
    void operator !();
};
void mystring :: operator !(){
    for(int i=0; str[i]!='\0'; i++){
            if(str[i] >= 65 && str[i] <= 96){
                str[i] = str[i]+32;
            }
            else if(str[i] >= 97 && str[i] <= 122){
                str[i] = str[i]-32;
            }
    }
    cout<<"Reverse String :"<<str<<endl;
}
int main(){
    mystring s;

    s.getdata();
    s.display();
    !s;

return 0;
}
