#include <bits/stdc++.h>

using namespace std;

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

int inputFunctionChoice() {
    cout << "\nChoose function phi(x):\n";
    cout << "1) 2x\n";
    cout << "2) x^2\n";
    cout << "3) x/3\n";

    int choice = static_cast<int>(inputNumber("Choose a number: "));

    if (choice >= 1 && choice <= 3) {
        return choice;
    }

    cout << "Invalid function choice. Please choose 1, 2 or 3.\n";
    return inputFunctionChoice();
}

double calculateX(double z) {
    if (z >= 0) {
        cout << "Condition: z >= 0\n";
        return 2 * z + 1;
    }

    cout << "Condition: z < 0\n";
    return log(z * z - z);
}

double calculatePhi(double x, int functionChoice) {
    switch (functionChoice) {
        case 1:
            cout << "\nSelected function phi(x) = 2x\n";
            return 2 * x;

        case 2:
            cout << "\nSelected function phi(x) = x^2\n";
            return x * x;

        case 3:
            cout << "\nSelected function phi(x) = x/3\n";
            return x / 3;
    }
}

double calculateY(double x, double phiX, double a, double c) {
    return sin(phiX) * sin(phiX)
        + a * pow(cos(x * x * x), 5)
        + c * log(pow(abs(x), 2.0 / 5.0));
}

int main() {
    double z = inputNumber("Enter z: ");
    double a = inputNumber("Enter a: ");
    double c = inputNumber("Enter c: ");

    double x = calculateX(z);

    if (abs(x) < 1e-12) {
        cout << "\nError: x cannot be equal to zero.\n";
        return 1;
    }

    double phiX = calculatePhi(x, inputFunctionChoice());
    double y = calculateY(x, phiX, a, c);

    cout << "\n========== RESULT ==========\n";
    cout << "x     = " << x << '\n';
    cout << "phi(x) = " << phiX << '\n';
    cout << "y     = " << y << '\n';
    cout << "============================\n";

    return 0;
}