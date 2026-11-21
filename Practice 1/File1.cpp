#include <iostream>
#include <iomanip>
#include <string>
using namespace std;

class item {
    string name;
    int code;
    float price;

public:
    void getdata() {
        cout << "Enter Item Name, Code and Price" << endl;
        cin >> name >> code >> price;
    }

    void display() {
        cout.width(20);
        cout.setf(ios::left, ios::adjustfield);

        cout << name << " | ";
        cout.unsetf(ios::left);

        cout << setw(6) << code << " | ";

        cout.setf(ios::showpos);
        cout.setf(ios::showpoint);
        cout.setf(ios::internal, ios::adjustfield);

        cout << setw(10) << setprecision(5) << price << " | ";
        cout.unsetf(ios::showpos);
        cout << endl;
    }

    float getprice() {
        return price;
    }
};

int main() {
    item i[5];
    float total = 0.0;

    for (int k = 0; k < 3; k++) {
        i[k].getdata();
    }

    cout << setw(20) << setiosflags(ios::left)
         << "Item Name" << " | "
         << setw(9) << "Item Code" << " | "
         << setw(10) << "Item Price" << " | " << endl;

    cout << "-----------------------------------------------------------------------------------" << endl;

    for (int k = 0; k < 3; k++) {
        i[k].display();
        total += i[k].getprice();
    }

    cout << "-----------------------------------------------------------------------------------" << endl;

    cout << setw(28) << "Total ::" << " | ";

    cout.setf(ios::showpos);
    cout.setf(ios::showpoint);
    cout.fill('*');
    cout.setf(ios::internal, ios::adjustfield);

    cout << setw(10) << setprecision(7) << total;
    cout.unsetf(ios::showpos);

    return 0;
}
