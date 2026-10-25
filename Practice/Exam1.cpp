#include <iostream>
using namespace std;

inline float area(int radius)
{
    return 3.14*radius*radius;
}
int main(){
    float radius;
    float circle_a;

    circle_a = area(5);
    cout<<"Area of circle ="<<circle_a;

    return 0;
}
