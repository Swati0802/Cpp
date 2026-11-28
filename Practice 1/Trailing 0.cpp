#include <iostream>
#include <fstream>
#include <iomanip>
#include <string>
using namespace std;

class student {
    string name;
    int id;
    float spi;

public:
    void getdata() {
        cout << "Enter student name :" << endl;
        cin >> name;

        cout << "Enter student ID :" << endl;
        cin >> id;

        cout << "Enter student SPI :" << endl;
        cin >> spi;
    }

    void display() {
        cout.setf(ios::left, ios::adjustfield);
        cout << setw(20) << name;

        cout << setw(6) << id;

        cout.setf(ios::showpoint);
        cout << fixed << setprecision(2) << setw(5) << spi;

        cout << endl;
    }
};

int main() {
    student s[5];
    fstream file;

    file.open("student.txt", ios::out | ios::binary);

    cout << "Enter student Information to file" << endl;

    for (int j = 0; j < 3; j++) {
        s[j].getdata();

        file.write((char *)&s[j], sizeof(s[j]));
        cout << "Data imported " << j << endl;
    }

    file.close();

    file.open("student.txt", ios::in | ios::binary);

    cout << "Read student Information from file" << endl;
    cout << left << setw(20) << "Student name"
         << setw(6) << "ID"
         << setw(5) << "SPI" << endl;

    for (int j = 0; j < 3; j++) {
        file.read((char *)&s[j], sizeof(s[j]));
        s[j].display();
    }

    file.close();

    return 0;
}
