#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main() {
    int n;
    cin >> n;

    vector<int> ans(n);
    for (int i = 0; i < ans.size(); i++) {
        cin >> ans[i];
    }

    sort(ans.begin(), ans.end());

    for (auto &&i : ans) {
        cout << i << endl;
    }

    return 0;
}