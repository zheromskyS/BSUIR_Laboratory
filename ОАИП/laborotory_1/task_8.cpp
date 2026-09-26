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

int32_t main() {
    double x = inputNumber("Please enter the value of x: ");
    double y = inputNumber("Please enter the value of y: ");
    double z = inputNumber("Please enter the value of z: ");

    cout << "phi = " << pow(M_E, fabs(x - y)) * pow(fabs(x - y), x + y)
                        / (atan(x) + atan(z)) + cbrt(pow(x, 6)
                        + pow(log(y), 2))<< endl;
}