#include <iostream>

using namespace std;

int main() {
    int n, m, l, r;
    int count = 0;

    cin >> n >> m;
    l = 0;
    r = n;

    for (int i = 0; i < m; i++) {
        int a, b;
        cin >> a >> b;
        if (a > l) {
            l = a;
        }
        if (b < r) {
            r = b;
        }
    }

    for (int i = 1; i <= n; i++) {
        if (i >= l && i <= r) {
            count++;
        }
    }

    cout << count << endl;

    return 0;
}