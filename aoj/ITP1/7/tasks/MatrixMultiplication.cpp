#include <bits/stdc++.h>

using namespace std;

class MatrixMultiplication {
public:
    void solve(std::istream& in, std::ostream& out) {
        int n, m, l;
        in >> n >> m >> l;

        vector<vector<int>> a(n, vector<int>(m));
        for (auto &&ai: a) {
            for (auto &&aj: ai) {
                in >> aj;
            }
        }
        vector<vector<int>> b(m, vector<int>(l));
        for (auto &&bi: b) {
            for (auto &&bj: bi) {
                in >> bj;
            }
        }

        vector<vector<long>> c(n, vector<long>(l, 0));
        for (int i = 0; i < n; i++) {
            for (int j = 0; j < m; j++) {
                for (int k = 0; k < l; k++) {
                    c[i][k] += a[i][j] * b[j][k];
                }
            }
        }

        for (int i = 0; i < n; i++) {
            for (int j = 0; j < l; j++) {
                out << c[i][j];
                if (j == l - 1) {
                    out << endl;
                }
                else {
                    out << ' ';
                }
            }
        }
    }
};
