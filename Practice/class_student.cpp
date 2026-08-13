#include <iostream>
using namespace std;

class student{
    string s_name;
    int s_id;
    float s_CPI, s_SPI;
    int s_csem;

public:
    void getData(){
        cout<<"Enter Student Name :"<<endl;
        cin>>s_name;
        cout<<"Enter Student ID :"<<endl;
        cin>>s_id;
        cout<<"Enter Student CPI :"<<endl;
        cin>>s_CPI;
        cout<<"Enter Student SPI :"<<endl;
        cin>>s_SPI;
        cout<<"Enter Student Current Sem :"<<endl;
        cin>>s_csem;
    }
    void display(){
        cout<<"Student Name :"<<s_name<<endl;
        cout<<"Student ID :"<<s_id<<endl;
        cout<<"Student CPI :"<<s_CPI<<endl;
        cout<<"Student SPI :"<<s_SPI<<endl;
        cout<<"Student Current Sem :"<<s_csem<<endl;
    }
    float getCPI(){
        return s_CPI;
    }
    float getSPI(){
        return s_SPI;
    }
    float getID(){
        return s_id;
    }
};
int main(){
    student s[20],temp;
    int n, id, found = 0;

    cout<<"Enter no. of students :"<<endl;
    cin>>n;

    for(int i=0; i<n; i++){
        cout<<"Enter Details of student :"<<i+1<<endl;
        s[i].getData();
    }
    cout<<"Student having CPI between 7.6 and 8.9 :"<<endl;
    for(int i=0; i<n; i++){
        if(s[i].getCPI() >= 7.6 && s[i].getCPI()<= 8.9){
            s[i].display();
        }
    }

for(int i=0; i<n-1; i++){
    for(int j=i+1; j<n; j++){
        if(s[i].getSPI() > s[j].getSPI()){
            temp = s[i];
            s[i] = s[j];
            s[j] = temp;
        }
    }
}
cout<<"Student in Ascending Order of SPI :"<<endl;
for(int i=0; i<n; i++){
    s[i].display();
}
cout<<"Enter Student ID to Search :"<<endl;
cin>>id;
for(int i=0; i<n; i++){
    if(s[i].getID() == id){
        s[i].display();
        found = 1;
    }
}
if(found == 0){
    cout<<"Student ID not Found "<<endl;

    return 0;
}
}
