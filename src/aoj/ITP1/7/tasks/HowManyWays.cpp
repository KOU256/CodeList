#include <bits/stdc++.h>

using namespace std;

class HowManyWays {
public:
    void solve(std::istream& in, std::ostream& out) {
        int n, x;
        while (in >> n >> x, n != 0 || x != 0) {
            int count = 0;
            for (int i = 1; i <= n; i++) {
                for (int j = i + 1; j <= n; j++) {
                    for (int k = j + 1; k <= n; k++) {
                        if (i + j + k == x) {
                            count++;
                        }
                    }
                }
            }
            out << count << endl;
        }

    }
};
