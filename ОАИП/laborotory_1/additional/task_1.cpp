#include <bits/stdc++.h>

using namespace std;

int main() {
    double x = 14.26,
        y = -1.22,
        z = 0.035;

    cout << "t = " << 2 * cos(x - numbers::pi / 6)
                    / (0.5 + sin(y) * sin(y))
                    * (1 + (z * z / 3 - z * z / 5)) ;

    return 0;
}