#include <bits/stdc++.h>

class PrintARectangle {
public:
    void solve(std::istream& in, std::ostream& out) {
        int h, w;

        while (in >> h >> w) {
            if (h == 0 && w == 0) {
                break;
            }

            for (int y = 0; y < h; y++) {
                for (int x = 0; x < w; x++) {
                    out << '#';
                }
                out << std::endl;
            }
            out << std::endl;
        }

    }
};
