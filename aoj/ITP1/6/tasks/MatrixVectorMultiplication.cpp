#include <bits/stdc++.h>

using namespace std;

class MatrixVectorMultiplication {
public:
    void solve(std::istream& in, std::ostream& out) {
        int n, m;
        in >> n >> m;
        int a[n][m];
        for (int i = 0; i < n; i++) {
            for (int j = 0; j < m; j++) {
                in >> a[i][j];
            }
        }
        int b[m];
        for (int j = 0; j < m; j++) {
            in >> b[j];
        }

        long c[n] = {0};
        for (int i = 0; i < n; i++) {
            for (int j = 0; j < m; j++) {
                c[i] += a[i][j] * b[j];
            }
            out << c[i] << endl;
        }
    }
};
