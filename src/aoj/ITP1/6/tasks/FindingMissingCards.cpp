#include <bits/stdc++.h>

using namespace std;

class FindingMissingCards {
public:
    void solve(std::istream& in, std::ostream& out) {
        int n;
        in >> n;

        map<char, array<bool, 13>> t;
        for (int i = 0; i < n; i++) {
            char suit;
            int rank;
            in >> suit >> rank;
            t[suit][rank - 1] = true;
        }

        char suit[4] = {'S', 'H', 'C', 'D'};
        for (auto c : suit) {
            for (int i = 0; i < 13; i++) {
                if (!t[c][i]) {
                    out << c << ' ' << i + 1 << endl;
                }
            }
        }

    }
};
