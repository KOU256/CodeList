#include <bits/stdc++.h>

using namespace std;

int main() {
    int n;
    cin >> n;

    vector<int> a(n);
    for (auto&& a_i : a) {
        cin >> a_i;
    }

    int count = 0;
    for (auto&& a_i : a) {
        while (a_i % 2 == 0 || a_i % 3 == 2) {
            count++;
            a_i--;
        }
    }

    cout << count << endl;

    return 0;
}