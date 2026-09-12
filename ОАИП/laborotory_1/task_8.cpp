#include <bits/stdc++.h>
using namespace std;
#define int long long

int32_t main() {
    double x, y, z = 0;

    cout << "Enter x: ";
    cin >> x;
    cout << "Enter y: ";
    cin >> y;
    cout << "Enter z: ";
    cin >> z;

    cout << "phi = " << pow(M_E, fabs(x - y)) * pow(fabs(x - y), x + y) / (atan(x) + atan(z)) + cbrt(pow(x, 6) + pow(log(y), 2))<< endl;
    return 0;
}