#include <iostream>
using namespace std;

class Distance{
    int feet,inch;
public:
    Distance(int f, int i){
        feet = f;
        inch = i;
        cout<<f<<" Feet "<<endl;
        cout<<i<<" Inch "<<endl;
    }
};
int main(){
    Distance d(5, 2);
return 0;
}
