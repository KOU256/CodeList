#include <bits/stdc++.h>

using namespace std;

int main() {
    int n;
    cin >> n;

    vector<int> p(n), q(n), permutation(n);
    for(auto&& p_i : p) {
        cin >> p_i;
    }
    for(auto&& q_i : q) {
        cin >> q_i;
    }
    iota(permutation.begin(), permutation.end(), 1);

    int a = 0, b = 0, count = 1;
    while(a == 0 || b == 0) {
        if (p == permutation) {
            a = count;
        }
        if (q == permutation) {
            b = count;
        }
        next_permutation(permutation.begin(), permutation.end());

        count++;
    }

    cout << abs(a - b) << endl;

    return 0;
}