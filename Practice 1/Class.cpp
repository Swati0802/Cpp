#include <iostream>
#include <fstream>
using namespace std;

class inven {
    char name[10];
    float cost;

public:
    void getdata() {
        cout << "Enter name :" << endl;
        cin >> name;

        cout << "Enter Cost =" << endl;
        cin >> cost;
    }

    void display() {
        cout << "Name =" << name << endl;
        cout << "Cost =" << cost << endl;
    }
};

int main() {
    inven a;

    cout << "Enter Details " << endl;

    fstream file;
    file.open("stock.txt", ios::in | ios::out | ios::app | ios::binary);

    a.getdata();

    file.write((char *)&a, sizeof(a));

   // file.seekg(0, ios::beg);

    file.read((char *)&a, sizeof(a));

    a.display();

    file.close();

    return 0;
}
