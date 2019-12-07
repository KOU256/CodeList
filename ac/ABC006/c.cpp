#include<iostream>

using namespace std;

int main(int argc, char **argv) {
    int n, m;

    cin >> n >> m;

    int x, y, z;

    if (m < n * 2 || n * 4 < m) {
        cout << "-1 -1 -1" << endl;

        return 0;
    }
    else {
        for (z = 0; z <= m / 4; z++) {
            for (y = 0; y <= 1; y++) {
                x = n - y - z;

                if ((m - y * 3 - z * 4) % 2 == 0 && (m - y * 3 - z * 4) / 2 == x) {
                    cout << x << ' ' << y << ' ' << z << endl;

                    return 0;
                }
            }
        }
    }

    cout << "-1 -1 -1" << endl;

    return 0;
}