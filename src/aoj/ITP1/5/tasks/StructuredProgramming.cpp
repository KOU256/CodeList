#include <bits/stdc++.h>

class StructuredProgramming {
public:
    void solve(std::istream& in, std::ostream& out) {
        int n;
        in >> n;

        for (int i = 1; i <= n; i++) {
            int x = i;
            if (x % 3 == 0) {
                out << ' ' << i;
                continue;
            }
            while (x) {
                if (x % 10 == 3) {
                    out << ' ' << i;
                    break;
                }
                x /= 10;
            }
        }
        out << std::endl;
    }
};
