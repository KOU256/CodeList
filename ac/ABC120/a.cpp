#include <iostream>

using namespace std;

int main(int argc, char **argv) {
    int a, b, c;

    cin >> a >> b >> c;

    if (b / a >= c) {
        cout << c << endl;
    }
    else {
        cout << b / a << endl;
    }

    return 0;
}