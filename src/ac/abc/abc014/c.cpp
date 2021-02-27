#include <bits/stdc++.h>

using namespace std;

int main() {
    int n;
    cin >> n;

    array<int, 1000001> s{0};
    for (int n_i = 0; n_i < n; n_i++) {
        int a, b;
        cin >> a >> b;
        s[a]++;
        s[b + 1]--;
    }

    for (int n_i = 0; n_i < 1000000; n_i++) {
        s[n_i + 1] += s[n_i];
    }

    cout << *max_element(s.begin(), s.end()) << endl;

    return 0;
}