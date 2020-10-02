#include <bits/stdc++.h>

using namespace std;

typedef long long ll;

int main() {
    string s;
    cin >> s;

    ll sum = 0;

    for (int i = 0; i < (1 << s.length() - 1); i++) {
        long long tmp = s[0] - '0';

        for (int j = 0; j < s.length() - 1; j++) {
            if (i & (1 << j)) {
                sum += tmp;
                tmp = s[j + 1] - '0';
            }
            else {
                tmp *= 10;
                tmp += s[j + 1] - '0';
            }
        }

        sum += tmp;
    }

    cout << sum << endl;

    return 0;
}