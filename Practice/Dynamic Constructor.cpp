#include <iostream>
using namespace std;

class Dynamic
{
    int *ptr;

public:
    Dynamic()
    {
        ptr = new int;
        *ptr = 100;
    }

    Dynamic(int x)
    {
        ptr = new int;
        *ptr = x;
    }

    int display()
    {
        return (*ptr);
    }
};

int main()
{
    Dynamic d1, d2(90);

    cout << d1.display() << endl;
    cout << d2.display() << endl;

    return 0;
}
