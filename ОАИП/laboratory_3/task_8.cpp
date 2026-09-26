#include <bits/stdc++.h>
using namespace std;

long long factorialRecursive(int x) {
    if (x <= 1) return 1;
    return x + factorialRecursive(x - 1);
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

    cout << fixed << setprecision(10);

    cout << setw(10) << "x"
         << setw(21) << "Y(x)"
         << setw(20) << "S(x)"
         << setw(29) << "|Y(x) - S(x)|"
         << endl;

   for (int k = 0; k <= n; k++) {
       double Yx = exp(2 * a);
       double Sx = pow(2 * a, k) / factorialRecursive(2 * k);
       double YS = abs(Yx - Sx);

       cout << setw(15) << a
       << setw(20) << Yx
       << setw(20) << Sx
       << setw(25) << YS
       << endl;

       a = a < b - h / 2 ? a += h : a;
   }

    return 0;
}