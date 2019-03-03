#include <iostream>

using namespace std;

int main(int argc, char **argv) {
    int a, b, k;
    int count = 0;

    cin >> a >> b >> k;

    for (int i = (a + b) / 2; i > 0; i--) {
        if (a % i == 0 && b % i == 0) {
            count++;
            if (count == k) {
                cout << i << endl;

                return 0;
            }
        }
    }

    return 0;
}