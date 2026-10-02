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

    cout << "\nInvalid input. Please enter a number.\n" << '\n';

    return inputNumber(message);
}

int main() {
    int rowCount = inputNumber("Enter number of rows: ");
    int columnCount = inputNumber("Enter number of columns: ");

    int arr[rowCount][columnCount];

    for (int i = 0; i < rowCount; i++) {
        for (int j = 0; j < columnCount; j++) {
            cin >> arr[i][j];
        }
    }

    for (int i = 0; i < rowCount - 1; i++) {
        for (int k = 0; k < rowCount - i - 1; k++) {

            int firstSum = 0;
            int secondSum = 0;

            for (int j = 0; j < columnCount; j++) {
                firstSum += arr[k][j];
                secondSum += arr[k + 1][j];
            }

            if (firstSum > secondSum) {
                for (int j = 0; j < columnCount; j++) {
                    int temperoryElement = arr[k][j];
                    arr[k][j] = arr[k + 1][j];
                    arr[k + 1][j] = temperoryElement;
                }
            }
        }
    }

    cout << endl;

    for (int i = 0; i < rowCount; i++) {
        for (int j = 0; j < columnCount; j++) {
            cout << arr[i][j] << " ";
        }
        cout << endl;
    }

    return 0;
}