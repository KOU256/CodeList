#include <iostream>
#include <string>
#include <vector>
#include <algorithm>

using namespace std;

int main() {
    int n, l;

    cin >> n >> l;

    vector<string> s(n);

    for (auto i = 0; i < n; i++) {
        cin >> s[i];
    }

    sort(s.begin(), s.end());

    for (auto&& i : s) {
        cout << i;
    }
    cout << endl;

    return 0;
}