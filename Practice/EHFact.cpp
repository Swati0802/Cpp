#include <iostream>
using namespace std;

int main() {
    int n, i, fact = 1;

    cout << "Enter n :" << endl;
    cin >> n;

    try {
        if (n > 0 && n < 20) {
            for (i = 1; i <= n; i++) {
                fact = fact * i;
            }

            cout << "Factorial of " << n << " is : " << fact << endl;
        }
        else if (n < 0) {
            throw 1;
        }
        else if (n >= 20) {
            throw 0.0;
        }
        else {
            cout << "Factorial of 0 is : 1" << endl;
        }
    }
    catch (int i) {
        cout << "You have entered a negative value" << endl;
    }
    catch (double i) {
        cout << "Value is too large to calculate using int" << endl;
    }

    return 0;
}
