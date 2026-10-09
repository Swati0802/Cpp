#include <iostream>
using namespace std;

class sample{
    int a,b;

public:
    sample(int x, int y){
        a = x;
        b = y;
    }
};
int main(){

    int a,b;
    cin >> a >> b;

    sample s1(a,b);
    sample s2(12,14);

return 0;
}
