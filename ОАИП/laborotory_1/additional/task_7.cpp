#include<bits/stdc++.h>

using namespace std;

int main() {
    double x = 0.1722,
        y = 6.33,
        z = 0.000325;

    cout << 5 * atan(x) - 0.25 * acos(x) * (x + 3 * fabs(x - y) + x * x) / (fabs(x - y) * z + x * x);
}