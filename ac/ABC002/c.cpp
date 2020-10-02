#include <iostream>
#include <iomanip>
#include <cmath>

using namespace std;

int main() {
    int x[3], y[3];

    cin >> x[0] >> y[0] >> x[1] >> y[1] >> x[2] >> y[2];

    x[1] -= x[0];
    x[2] -= x[0];
    y[1] -= y[0];
    y[2] -= y[0];

    cout << fixed << setprecision(1) << (double)abs(x[1] * y[2] - y[1] * x[2]) / 2.0 << endl;

    return 0;
}