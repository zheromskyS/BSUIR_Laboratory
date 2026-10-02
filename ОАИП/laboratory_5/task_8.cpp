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

void inputArrayManually(int elementCount, int* numbers) {
    for (int i = 0; i < elementCount; i++) {
        numbers[i] = inputNumber("Enter numbers[" "]: ");
    }
}

void inputArrayRandomly(int elementCount, int* numbers) {
    random_device rd;
    mt19937 gen(rd());
    uniform_int_distribution<int> distribution(-elementCount, elementCount);


    for (int i = 0; i < elementCount; i++) {
        numbers[i] = distribution(gen);
    }

    for (int i = 0; i < elementCount; i++) {
        cout << setw(to_string(elementCount).length() + 1) << numbers[i] << " \n";
    }
}

void chooseInputMethod(int elementCount, int* numbers) {
    cout << "\nChoose input method:\n";
    cout << "1) Enter elements manually\n";
    cout << "2) Generate elements randomly\n";

    int choice = inputNumber("Your choice: ");

    cout << '\n';


    switch (choice) {
        case 1: {
           inputArrayManually(elementCount, numbers);
            break;
        }
        case 2: {
            inputArrayRandomly(elementCount, numbers);
            break;
        }
        default: {
            cout << "Invalid input. Please enter a number.\n";
            chooseInputMethod(elementCount, numbers);
            break;
        }
    }
}

int main() {
    int sumAfterLastNegative = 0;
    bool haveNegative = false;

    int elementCount = inputNumber("Enter number of elements: ");

    int* numbers = new int[elementCount];

    chooseInputMethod(elementCount, numbers);

    for (int i = elementCount - 1; i >= 0; i--) {
        if (numbers[i] >= 0) {
            sumAfterLastNegative += numbers[i];
        } else {
            haveNegative = true;
            break;
        }
    }

    sumAfterLastNegative = haveNegative ? sumAfterLastNegative : 0;

    cout << "\nSum after the last negative element: "
        << sumAfterLastNegative << '\n';

    delete[] numbers;

    return 0;
}

