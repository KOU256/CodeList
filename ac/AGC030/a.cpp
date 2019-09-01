#include<iostream>

using namespace std;

int main(int argc, char **argv) {
    int a, b, c, count;

    cin >> a >> b >> c;

    if (a + b >= c) count = c + b;
    else    count = a + 2 * b + 1;

    cout << count << endl;
    return 0;
}