#include <bits/stdc++.h>

using namespace std;
using ll = long long;

#define REP(i, n) for (ll i = 0; i < (ll)n; i++)

bool is_prime(int n) {
    for (int i = 2; i * i <= n; i++) {
        if (n % i == 0) {
            return false;
        }
    }

    return true;
}

int main() {
    int x;
    cin >> x;

    while (!is_prime(x)) {
        x++;
    }

    cout << x << endl;

    return 0;
}
