#include<bits/stdc++.h>

using namespace std;

int main() {
    double x = 4000,
        y = -0.875,
        z = -0.000475;

    cout << pow(fabs(cos(x) - cos(y)), 1 + 2 * sin(y) * sin(y))
        * (1 + z + z * z / 2 + z * z * z / 3 + z * z * z * z / 4);
}