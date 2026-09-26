#include<bits/stdc++.h>

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

    cout << "Invalid input number. Please enter a number!\n";
    return inputNumber(message);
}



int main() {
    return 0;
}