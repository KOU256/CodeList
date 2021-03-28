#include <bits/stdc++.h>

using namespace std;

int main() {
    int n, m;
    cin >> n >> m;

    vector<string> s(n);
    for (int i = 0; i < n; i++) {
        cin >> s[i];
    }

    int ans = 0;
    for (int i = 0; i < n - 1; i++) {
        for (int j = i; j < n; j++) {
            int count = 0;
            for (int k = 0; k < m; k++) {
                if (s[i][k] != s[j][k]) {
                    count++;
                }
            }

            if (count % 2 == 1) {
                ans++;
            }
        }
    }

    cout << ans << endl;
}