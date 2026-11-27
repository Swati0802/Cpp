#include <iostream>
#include <string>
#include <cstring>
#include <fstream>
using namespace std;

int main() {
    char String[80];

    cout << "Hello" << endl;
    cin >> String;

    int len = strlen(String);

    fstream file;
    file.open("1.txt", ios::in | ios::out | ios::trunc);

    for (int i = 0; i < len; i++) {
        file.put(String[i]);
    }

    file.seekg(0);

    char ch;
    while (file.get(ch)) {
        cout << ch;
    }

    file.close();

    return 0;
}
