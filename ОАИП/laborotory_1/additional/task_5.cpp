#include<bits/stdc++.h>

using namespace std;

int main() {
    double x = -15.246,
        y = 0.04642,
        z = 2000.1;

    cout << log(pow(y, -sqrt(fabs(x)))) * (x - y / 2) + sin(atan(z)) * sin(atan(z));
}