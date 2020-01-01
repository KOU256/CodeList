#include <iostream>

using namespace std;

int main() {
    int a, b, t;
    int count = 0, time = 0;

    cin >> a >> b >> t;

    while (time + a <= t) {
        count += b;
        time += a;
    }

    cout << count << endl;

    return 0;
}