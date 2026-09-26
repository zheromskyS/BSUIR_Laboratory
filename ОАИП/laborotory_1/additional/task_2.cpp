#include<bits/stdc++.h>

using namespace std;

int main() {
    double x = -4.5,
        y = 0.000075,
        z = 84.5;

    cout << "u = " << cbrt(8 + abs((x - y) * (x - y)) + 1)
                    / (x * x + y * y + 2)
                    - pow(M_E, abs(x - y))
                    * pow(tan(z) * tan(z) + 1, x);
}