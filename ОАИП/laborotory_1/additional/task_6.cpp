#include<bits/stdc++.h>

using namespace std;

int main() {
    double x = 0.01655,
        y = -2.75,
        z = 0.15;

    cout << sqrt(10 * (cbrt(x) + pow(x, y + 2)))
            * (asin(z) * asin(z) - fabs(x - y));
}