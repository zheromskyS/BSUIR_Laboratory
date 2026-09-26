#include<bits/stdc++.h>
using namespace std;

int main() {
    double x = 0.0374,
        y = -0.825,
        z = 16;

    cout << (1 + sin(x + y) * sin(x + y))
        / fabs(x - 2 * y / 1 + x * x + y * y)
        * pow(x, fabs(y)) + cos(atan(1 / z))
        * cos(atan(1 / z)) << endl;
}