#include <bits/stdc++.h>

using namespace std;

class Grading {
public:
    void solve(std::istream& in, std::ostream& out) {
        int m, f, r;
        while (in >> m >> f >>r, m != -1 || f != -1 || r != -1) {
            int score = m + f;
            if (m == -1 || f == -1) {
                out << 'F' << endl;
            }
            else if (score >= 80) {
                out << 'A' << endl;
            }
            else if (score >= 65) {
                out << 'B' << endl;
            }
            else if (score >= 50) {
                out << 'C' << endl;
            }
            else if (score >= 30) {
                if (r >= 50) {
                    out << 'C' << endl;
                }
                else {
                    out << 'D' << endl;
                }
            }
            else {
                out << 'F' << endl;
            }
        }
    }
};
