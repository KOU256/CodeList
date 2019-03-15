#include<iostream>

using namespace std;

int main(int argc, char **argv) {
    int a, b;

    cin >> a >> b;

    if (b % a == 0) {
        cout << a + b << endl;
    }
    else {
        cout << b - a << endl;
    }

    return 0;
}