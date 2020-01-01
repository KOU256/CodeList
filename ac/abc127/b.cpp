#include <iostream>

using namespace std;

int main() {
    int r, d, x;

    cin >> r >> d >> x;

    long tmp = x;
    for (int i = 0; i < 10; i++) {
        tmp = r * tmp - d;
        cout << tmp << endl;
    }
    return 0;
}