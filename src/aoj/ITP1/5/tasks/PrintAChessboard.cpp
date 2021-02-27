#include <bits/stdc++.h>

class PrintAChessboard {
public:
    void solve(std::istream& in, std::ostream& out) {
        int h, w;

        while (in >> h >> w && h != 0 && w != 0) {
            for (int y = 0; y < h; y++) {
                for (int x = 0; x < w; x++) {
                    if ((y + x) % 2 == 0) {
                        out << '#';
                    }
                    else {
                        out << '.';
                    }
                }
                out << std::endl;
            }
            out << std::endl;
        }
    }
};
