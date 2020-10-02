#include <bits/stdc++.h>

using namespace std;

class Spreadsheet {
public:
    void solve(std::istream& in, std::ostream& out) {
        int r, c;
        in >> r >> c;

        vector<vector<int>> a(r + 1, vector<int>(c + 1));
        for (int y = 0; y < r; y++) {
            int row_sum = 0;
            for (int x = 0; x < c; x++) {
                in >> a[y][x];
                row_sum += a[y][x];
            }
            a[y][c] = row_sum;
        }
        for (int x = 0; x <= c; x++) {
            int column_sum = 0;
            for (int y = 0; y < r; y++) {
                column_sum += a[y][x];
            }
            a[r][x] = column_sum;
        }

        for (int y = 0; y <= r; y++) {
            for (int x = 0; x <= c; x++) {
                out << a[y][x];
                if (x == c) {
                    out << endl;
                }
                else {
                    out << ' ';
                }
            }
        }
    }
};
