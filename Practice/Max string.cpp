#include <iostream>
using namespace std;

string maximum(string s1, string s2, string s3){
    if(s1>=s2 && s1>=s3)
        return s1;
    else if(s2>=s1 && s2>=s3)
        return s2;
    else
        return s3;
}
int main(){
    string s1,s2,s3;
    cout<<"Enter string1:"<<endl;
    cin>>s1;

    cout<<"Enter string2:"<<endl;
    cin>>s2;

    cout<<"Enter string3:"<<endl;
    cin>>s3;

    cout<<"Maximum String is:"<<maximum(s1,s2,s3)<<endl;
    return 0;
}
