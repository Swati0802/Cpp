#include <iostream>
#include <fstream>
using namespace std;

int main(){
fstream f1,f2,f3;
f1.open("1.txt",ios::in);
f2.open("2.txt",ios::in);
f3.open("3.txt",ios::out | ios::app);

char c1,c2;

while(!f1.eof()){
    f1.get(c1);
    cout<<c1<<endl;
    f3.put(c1);
}
f1.close();

while(!f2.eof()){
    f2.get(c2);
    cout<<c2<<endl;
    f3.put(c2);
}
f2.close();
f3.close();


return 0;
}
