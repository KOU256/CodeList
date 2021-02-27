#include <bits/stdc++.h>

using namespace std;

int main() {
    int n;
    cin >> n;

    int ng1, ng2, ng3;
    cin >> ng1 >> ng2 >> ng3;

    if (n == ng1 || n == ng2 || n == ng3) {
        cout << "NO" << endl;

        return 0;
    }
    else {
        for (int i = 0; i < 100; i++) {
            if (n - 3 != ng1 && n - 3 != ng2 && n - 3 != ng3) {
                n -= 3;
            }
            else if (n - 2 != ng1 && n -2 != ng2 && n - 2 != ng3) {
                n -= 2;
            }
            else if (n - 1 != ng1 && n - 1 != ng2 && n - 1 != ng3) {
                n -= 1;
            }
            else {
                cout << "NO" << endl;

                return 0;
            }
        }
    }

    if (n <= 0) {
        cout << "YES" << endl;
    }
    else {
        cout << "NO" << endl;
    }

    return 0;
}