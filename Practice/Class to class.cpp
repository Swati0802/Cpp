#include <iostream>
using namespace std;

class vector{
    int a[5];

public:
    vector(){
        for(int i = 0; i < 5; i++){
            a[i] = i * 2;
        }
    }

    operator int(){
        int sum = 0;

            for(int i = 0; i < 5; i++){
                sum = sum + a[i];
            }
            return sum;
    }
};

int main(){
    vector v;
    int len;
    len = v;
    cout<<"Sum ="<<len<<endl;

return 0;
}
