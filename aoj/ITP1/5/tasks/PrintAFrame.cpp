#include <bits/stdc++.h>

class PrintAFrame {
public:
    void solve(std::istream& in, std::ostream& out) {
        int h, w;

        while (in >> h >> w && h != 0 && w != 0) {
            for (int x = 0; x < w; x++) {
                out << '#';
            }
            out << std::endl;
            for (int y = 0; y < h - 2; y++) {
                out << '#';
                for (int x = 0; x < w - 2; x++) {
                    out << '.';
                }
                out << '#' << std::endl;
            }
            for (int x = 0; x < w; x++) {
                out << '#';
            }
            out << std::endl << std::endl;
        }
    }
};
