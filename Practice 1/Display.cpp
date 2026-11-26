#include <iostream>
#include <fstream>
#include <string>
using namespace std;

int main() {
    string name;

    ifstream fin;
    fin.open("item.txt");

    fin >> name;

    cout << name;

    fin.close();

    return 0;
}
