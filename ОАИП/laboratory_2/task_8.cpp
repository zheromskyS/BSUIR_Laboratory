#include <bits/stdc++.h>
using namespace std;

int main() {
    double z, x;
    double a, c;
    double phiX;
    int functionChoice;

    cout << "Enter z: ";
    cin >> z;

    cout << "Enter a: ";
    cin >> a;

    cout << "Enter c: ";
    cin >> c;

    cout << "Choose function phi(X):" << endl;
    cout << "1) 2x" << endl;
    cout << "2) x^2" << endl;
    cout << "3) x/3" << endl;
    cout << "Choose a number: ";
    cin >> functionChoice;

    if (z >= 0) {
        x = 2 * z + 1;
        cout << "Condition: z >= 0" << endl;
    } else {
        x = log(z * z - z);
        cout << "Condition: z < 0" << endl;
    }

    switch (functionChoice) {
        case 1:
            phiX = 2 * x;
            cout << "Selected function phi(x) = 2x" << endl;
            break;
        case 2:
            phiX = x * x;
            cout << "Selected function phi(x) = x^2" << endl;
            break;
        case 3:
            phiX = x / 3;
            cout << "Selected function phi(x) = x/3" << endl;
            break;
        default:
            cout << "Invalid function choice!" << endl;
            return 1;
    }

    double y = pow(sin(phiX), 2)
            + a * pow(cos(x * x * x), 5)
            + c * log(pow(abs(x), 2.0 / 5.0));

    cout << "x = " << x << endl;
    cout << "y = " << y << endl;

    return 0;
}