#include<bits/stdc++.h>
using namespace std;

int main() {
    int rowCount, columnCount;

    cout << "Enter number of rows: ";
    cin >> rowCount;

    cout << "Enter cols: ";
    cin >> columnCount;

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

    for (int i = 0; i < rowCount; i++) {
        for (int j = 0; j < columnCount; j++) {
            cout << arr[i][j] << " ";
        }
        cout << endl;
    }

    return 0;
}