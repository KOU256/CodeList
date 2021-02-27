#include <bits/stdc++.h>

using namespace std;

int main() {
    int n, k;
    cin >> n >> k;

    string s;
    cin >> s;
    vector<int> a(26);
    for (int i = 0; i < n; i++) {
        a[s[i] - 'a']++;
    }

    string t;
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < 26; j++) {
            if (a[j] > 0) {
                vector<int> tmp = a;
                tmp[j]--;

                int diff = 0;
                if (j != s[i] - 'a') {
                    diff++;
                }

                for (int l = i + 1; l < n; l++) {
                    if (tmp[s[l] - 'a'] == 0) {
                        diff++;
                    }
                    else {
                        tmp[s[l] - 'a']--;
                    }
                }

                if (diff <= k) {
                    t += (char)(j + 'a');
                    a[j]--;

                    if (t[i] != s[i]) {
                        k--;
                    }

                    break;
                }
            }
        }
    }

    cout << t << endl;

    return 0;
}