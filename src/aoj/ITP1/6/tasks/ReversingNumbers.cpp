#include <bits/stdc++.h>

using namespace std;

class ReversingNumbers {
public:
    void solve(std::istream& in, std::ostream& out) {
        int n;
        in >> n;

        vector<int> a(n);
        for (int i = 0; i < n; i++) {
            in >> a[i];
        }

        for (int i = n - 1; i >= 0; i--) {
            out << a[i];
            if (i > 0) {
                out << ' ';
            }
        }
        out << endl;
    }
};
