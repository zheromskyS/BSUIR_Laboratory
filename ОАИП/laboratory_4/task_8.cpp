#include <bits/stdc++.h>
using namespace std;

long long calculateFactorial(int x) {
    if ( x <= 1) return 1;
    return x * calculateFactorial(x - 1);
}

double calculateY(double a, int k) {
    return exp(2 * a);
}

double calculateS(double a, int k) {
    return pow(2 * a, k) / calculateFactorial(2 * k);
}

double calculateDifference(double a, int k) {
    return abs(calculateY(a, k) - calculateS(a, k));
}

void printResults(
    double (*chosenFunction)(double, int),
    double a, double b, double h, double n) {

    for (int k = 0; k < n; k++) {
        cout << "x = " << a << "    result = "
             <<  chosenFunction(a, k) << endl;

        a = a < b - h / 2 ? a += h : a;
    }
}

void chooseFunction(double a, double b, double h, double n) {
    int numberFunctionChoice;

    cout << "\nChoose a function number: " << endl;
    cout << "1) Y(x)" << endl;
    cout << "2) S(x)" << endl;
    cout << "3) |Y(x) - S(x)|" << endl;

    cout << "\nChoose a function number: ";
    cin >> numberFunctionChoice;

    switch (numberFunctionChoice) {
        case 1:
            printResults(calculateY, a, b, h, n);
            break;

        case 2:
            printResults(calculateS, a, b, h, n);
            break;

        case 3:
            printResults(calculateDifference, a, b, h, n);
            break;

        default:
            cout << "\nInvalid function choice." << endl;
            chooseFunction(a, b, h, n);
            break;
    }
}

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

int main() {
    double a = inputNumber("Please enter the value of a: ");
    double b = inputNumber("Please enter the value of b: ");
    double h = inputNumber("Please enter the value of h: ");
    double n = inputNumber("Please enter the value of n: ");

    chooseFunction(a, b, h, n);

    return 0;
}