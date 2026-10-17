#include <iostream>
using namespace std;

class String{
    string str;
public:
    String(string s = ""){
        str = s;
    }
    String operator +(String s){
        String tmp;
        tmp.str = str + s.str;
        return tmp;
    }
    bool operator <= (String s){
        return str.length() <= s.str.length();
    }

    friend ostream &operator << (ostream &output , String s){
        output << s.str;
        return output;
    }
};
int main(){
    String s1("BVM");
    String s2("VVNAGAR");
    String s3 = s1 + s2;

    cout<<"String 1 = "<<s1<<endl;
    cout<<"String 2 = "<<s2<<endl;
    cout<<"String 3 = "<<s3<<endl;

    if(s1 <= s2){
        cout<<"Length of string 1 is <= string 2."<<endl;
    }
    else
        cout<<"Length of string 2 is <= string 2."<<endl;

        return 0;
}
