#include <bits/stdc++.h>

using namespace std;

class OfficialHouse {
public:
    void solve(std::istream& in, std::ostream& out) {
        int n;
        in >> n;

        int a[4][3][10] = {0};
        for (int i = 0; i < n; i++) {
            int b, f, r, v;
            in >> b >> f >> r >> v;

            a[b - 1][f - 1][r - 1] += v;
        }

        for (int i = 0; i < 4; i++) {
            for (int j = 0; j < 3; j++) {
                for (int k = 0; k < 10; k++) {
                    out << ' ' << a[i][j][k];
                }
                out << endl;
            }
            if (i < 4 - 1) {
                out << "####################" << endl;
            }
        }
    }
};
