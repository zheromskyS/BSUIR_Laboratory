#include <bits/stdc++.h>

using namespace std;

#define int long long

double inputNumber(const string& message) {
    string input;
    double number;
    char extra;
    cout << message;

    getline(cin, input);

    stringstream stream(input);

    if (stream >> number && !(stream >> extra)) {
        return number;
    }

    cout << "Invalid input. Please enter a number.\n";

    return inputNumber(message);
}

void chooseInputMethod(double& x, double& y, double& z) {
    cout << "Choose input method:\n";
    cout << "1) Enter values manually\n";
    cout << "2) Use default values\n";


    int choice = inputNumber("Your choice: ");

    switch (choice) {
        case 1: {
            x = inputNumber("Enter value for x: ");
            y = inputNumber("Enter value for y: ");
            z = inputNumber("Enter value for z: ");
            break;
        }
        case 2: {
            cout << "Using default values:\n";
            cout << "x = " << x << "\n";
            cout << "y = " << y << "\n";
            cout << "z = " << z << "\n";
            break;
        }
        default: {
            cout << "Invalid choice. Please try again.\n";
            chooseInputMethod(x, y, z);
            break;
        }
    }
}

int32_t main() {
    double x = -0.02235;
    double y = 2.23;
    double z = 15.221;

    chooseInputMethod(x, y, z);

    cout << "phi = " << pow(M_E, fabs(x - y)) * pow(fabs(x - y), x + y)
                        / (atan(x) + atan(z)) + cbrt(pow(x, 6)
                        + pow(log(y), 2))<< endl;

    return 0;
}